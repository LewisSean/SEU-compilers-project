#include"LALR1.h"
#include <chrono>   
using namespace std;
using namespace chrono;

bool LALR1::generateDFA() {
	//map<set<int>, LR1State> LALR1states;
    //待优化
	
	for (auto& s1 : lr1.LR1States) {
		set<int> common;
		common.emplace(s1.first);
		for (auto& s2 : lr1.LR1States) {
			if (s1.first != s2.first && s1.second.itemsEqual(s2.second)) {
				common.emplace(s2.first);
			}
		}
		if (common.size() == 1) {
			LALR1states.emplace(s1);
			continue;
		}


		LR1State newState;
		vector<Item> tmp;
		for (auto& id : common) {
			for (auto& edge : lr1.LR1States[id].edges) {
				newState.addEdge(edge.first,edge.second);
			}
			for (auto& item:lr1.LR1States[id].items) {
				bool exist = false;
				for (auto& tmp_item : tmp) {
					if (tmp_item.productionEqual(item)) {
						exist = true;
						for (auto& predict : item.predict_set) {
							if (tmp_item.predict_set.count(predict) == 0) {
								tmp_item.predict_set.emplace(predict);
							}
						}
					}
				}
				if(!exist)tmp.emplace_back(item);
			}		
		}
		//判断是否出现规约-规约冲突
		if (RRconflict(tmp)) {
			cout << "出现规约-规约冲突,生成LALR(1)失败！" << endl;
			return false;
		}
		newState.items = set<Item>(tmp.begin(), tmp.end());
		int id_common = *min_element(common.begin(),common.end());
		newState.id = id_common;
		for (auto& id : common)combined_states.emplace(make_pair(id, id_common));
		LALR1states.emplace(make_pair(id_common,move(newState)));
	}
	for (auto& state : LALR1states) {
		for (auto& edge : state.second.edges) {
			if (combined_states.count(edge.second)) {
				edge.second = combined_states[edge.second];
			}
		}
	}
	cout << "generate LALR1 Parsing Table successfully! Total state: " << LALR1states.size() << endl;
	return true;
}
//对上面函数的优化版本v2

bool LALR1::generateDFA_v2() {

	//auto start = system_clock::now();
	//step1
	vector<pair<int, set<int>>> cluster_class;
	for (auto& s1 : lr1.LR1States) {
		bool found = false;
		for (auto& i : cluster_class) {
			if (lr1.LR1States[i.first].itemsEqual(s1.second)) {
				i.second.emplace(s1.first);
				found = true;break;
			}
		}
		if (!found) {
			set<int> tmp;tmp.emplace(s1.first);
			cluster_class.push_back(make_pair(s1.first, move(tmp)));
		}
	}
	//step2
	for (auto& same_core : cluster_class) {
		if (same_core.second.size() == 1) {
			LALR1states.emplace(make_pair(same_core.first, lr1.LR1States[same_core.first]));
		}
		else {
			LR1State newState;
			vector<Item> tmp;
			for (auto& id : same_core.second) {
				for (auto& edge : lr1.LR1States[id].edges) {
					newState.addEdge(edge.first, edge.second);
				}
				for (auto& item : lr1.LR1States[id].items) {
					bool exist = false;
					for (auto& tmp_item : tmp) {
						if (tmp_item.productionEqual(item)) {
							exist = true;
							for (auto& predict : item.predict_set) {
								if (tmp_item.predict_set.count(predict) == 0) {
									tmp_item.predict_set.emplace(predict);
								}
							}
						}
					}
					if (!exist)tmp.emplace_back(item);
				}
			}
			//判断是否出现规约-规约冲突
			if (RRconflict(tmp)) {
				cout << "出现规约-规约冲突,生成LALR(1)失败！" << endl;
				return false;
			}
			else {
				//添加合并之后的LALR1state 并映射边
				newState.items = set<Item>(tmp.begin(), tmp.end());
				for (auto& edge : newState.edges) {
					for (auto& term : cluster_class) {
						if (term.second.count(edge.second)) {
							edge.second = term.first;
							break;
						}
					}
				}
				LALR1states.emplace(make_pair(same_core.first, move(newState)));

			}
		}

	}
	//auto end = system_clock::now();
	//auto duration = duration_cast<microseconds>(end - start);
	//cout << "花费了"
	//	<< double(duration.count()) * microseconds::period::num / microseconds::period::den
	//	<< "秒" << endl;


	cout << "generate LALR1 Parsing Table successfully! Total state: " << LALR1states.size() << endl;
	return true;
}

bool LALR1::RRconflict(vector<Item>& items) {
	for (auto& it1 : items) {
		if (it1.pos != it1.end)continue;
		for (auto& it2 : items) {
			if (it2.pos != it2.end)continue;
			if (it1.production.first != it2.production.first && it1.production.second == it2.production.second)
				return true;
		}
	}
	return false;
}

void LALR1::generateParsingTable() {
	//vector<map<string, int>>
	//map<int, map<string, int>>
	for (int i = 0; i < lr1.parsing_table.size(); i++) {
		if (LALR1states.count(i)) {
			map<string, int> tmp(lr1.parsing_table[i]);
			vector<pair<string, int>> edges2add;
			for (auto& edge : tmp) {
				if (combined_states.count(edge.second)) {
					edge.second = combined_states[edge.second];
				}
				if (edge.second < 0) {
					vector<string>target = lr1.grammar_names[-edge.second - 1];
					Item target_item(make_pair(target[0], vector<string>(target.begin()+1, target.end())));
					target_item.pos = target_item.end;
					for (auto& item : LALR1states[i].items) {
						if (item.productionEqual(target_item)) {
							for (auto& predict : item.predict_set) {
								edges2add.emplace_back(make_pair(predict, edge.second));
							}
						}
					}
				}
			}
			for (auto& p : edges2add)tmp.emplace(p);
			parsing_table.emplace(make_pair(i, move(tmp)));
		}
	}
}
void LALR1::printParsingTable() {
	cout << endl << "grammar ruler are as follows:" << endl;
	for (int i = 0; i < lr1.grammar_names.size();i++) {
		cout << i + 1 << ". " << lr1.grammar_names[i][0] << " -> ";
		for (int j = 1; j < lr1.grammar_names[i].size(); j++)cout << lr1.grammar_names[i][j] << " ";
		cout << endl;
	}

	for (auto& term: parsing_table) {
		cout << "------LALR1 state: " << term.first << "--------" << endl;
		for (auto& g : term.second) {
			if (g.second < 0)cout << g.first << ": reduce " << -g.second << endl;
			else {
				if (lr1.VT_names.count(g.first))cout << g.first << ": shift " << g.second << endl;
				else cout << g.first << ": goto " << g.second << endl;
			}
		}
	}
}

void LALR1::printParsingTable2file() {
	ofstream ofs("LALR1_Parsing_table.out");
	ofs << endl << "grammar ruler are as follows:" << endl;
	for (int i = 0; i < lr1.grammar_names.size();i++) {
		ofs << i + 1 << ". " << lr1.grammar_names[i][0] << " -> ";
		for (int j = 1; j < lr1.grammar_names[i].size(); j++)ofs << lr1.grammar_names[i][j] << " ";
		ofs << endl;
	}

	for (auto& term : parsing_table) {
		ofs << "------LALR1 state: " << term.first << "--------" << endl;
		for (auto& g : term.second) {
			if (g.second < 0)ofs << g.first << ": reduce " << -g.second << endl;
			else {
				if (lr1.VT_names.count(g.first))ofs << g.first << ": shift " << g.second << endl;
				else ofs << g.first << ": goto " << g.second << endl;
			}
		}
	}
	ofs.close();
}