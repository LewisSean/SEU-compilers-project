#include<vector>
#include<map>
#include<set>
#include<string>
#include<stack>
#include<vector>
#include<iostream>
#include<algorithm>
#include"LR1.h"
#include <chrono>   
#include<queue>
using namespace std;
using namespace chrono;

bool Item::productionEqual(const Item& it)const {
	if (it.pos == pos && production == it.production)return true;
	else return false;
}
bool Item::operator == (const Item& it) const{
	if (it.pos == pos && production == it.production && it.predict_set == predict_set)return true;
	else return false;
}
bool Item::operator != (const Item& it) const { return !(*this == it); }

set<string> LR1State::getStrFirst(vector<string>& str,
	map<string, set<string>>& myFirst, set<string>& VT, set<string>& VN) {
	set<string> result;
	int index;
	for (index = 0; index < str.size(); index++) {
		string term = str[index];
		if (VT.count(term)) { 
			result.emplace(term);
			break;
		}
		else if(VN.count(term)){
			bool noEplison = true;
			for (auto& i : myFirst[term]) {
				if (i == myEpsilon)noEplison = false;
				else result.emplace(i);
			}
			if (noEplison)break;
		}
		else { cout << term <<" :"<<"calculate First error!" << endl;break; }
	}
	if (index == str.size())result.emplace(myEpsilon);
	return result;
}

void LR1State::closure(map<string, vector<vector<string>>>& grammar, 
	map<string, set<string>>& myFirst, set<string>& VT, set<string>& VN) {
	bool unchanged;
	while (1) {
		unchanged = true;
		set<Item> items2add;
		for (auto& item : items) {
			if (item.pos == item.end)continue;
			string B = item.production.second[item.pos];
			if (item.pos < item.end && VN.count(B)) {
				for (auto& p : grammar[B]) {
					//求解First集
					vector<string> beta(item.production.second.begin()+item.pos+1, item.production.second.end());
					set<string> itemFirst = getStrFirst(beta,myFirst,VT,VN);
					if (itemFirst.count(myEpsilon)) {
						itemFirst.erase(myEpsilon);
						itemFirst.insert(item.predict_set.begin(),item.predict_set.end());
					}
					
					//添加新的item项或者添加新的predict
					Item tmp(make_pair(B, p));
					tmp.predict_set = itemFirst;
					if (!items.count(tmp)) {
						items2add.emplace(tmp);
						unchanged = false;
					}
					else  {
						for (auto& i : tmp.predict_set) {
							if (items.find(tmp)->predict_set.count(i) == 0) {
								unchanged = false;
								for (auto& i : items.find(tmp)->predict_set)if (!tmp.predict_set.count(i)) {
									tmp.predict_set.emplace(i);
									
								}
								items2add.emplace(tmp);
								break;
							}
						}
					}
				}
			}
		}
		for (auto& i : items2add) {
			if (items.count(i)) {
				items.erase(items.find(i));
			}
			items.emplace(i);
		}
		/*
		cout << "-------------------" << endl;
		for (auto& i : items) i.printItem();
		*/
		if (unchanged)break;
		
	}
}
bool LR1State::isEqual(const LR1State& target) {
	if (items.size() != target.items.size())return false;
	for (auto& i : items) {
		if (target.items.count(i) == 0)
			return false;
		if (*target.items.find(i) != i)
			return false;
	}
	return true;
}

bool LR1State::itemsEqual(const LR1State& target) {
	if (items.size() != target.items.size())return false;
	for (auto& i : items) {
		if (target.items.count(i) == 0)
			return false;
		if (target.items.find(i)->pos != i.pos)
			return false;
	}
	return true;
}

LR1State LR1::GOTO(LR1State& I, const string& X, int id) {
	LR1State newState(id);
	for (auto& item : I.items) {
		if (item.pos != item.end && item.production.second[item.pos] == X) {
			Item newItem(item);
			newItem.pos++;
			newState.items.emplace(move(newItem));
		}
	}
	
	newState.closure(grammar, myFirst,VT_names,VN);
	return newState;
}

LR1State LR1::GOTO_Epsilon(LR1State& I, const string& X, int id) {
	LR1State newState(id);
	for (auto& item : I.items) {
		if (item.pos != item.end && item.production.second[item.pos] == X) {
			Item newItem(item);
			newItem.pos+=2;
			newState.items.emplace(move(newItem));
		}
	}
	newState.closure(grammar, myFirst, VT_names, VN);
	return newState;
}

void LR1::generateDFA() {
	stack<int> statesToDo;
	statesToDo.push(0);
	while (!statesToDo.empty()) {
		int id = statesToDo.top();
		statesToDo.pop();
		vector<string> nextSymbols = LR1States[id].getNextSymbol();
		for (auto& i : nextSymbols) {
			LR1State newState = GOTO(LR1States[id], i, totalStates);
			int dst = contain(newState);
			if (dst >= 0) { LR1States[id].addEdge(i, dst);continue; }

			LR1States[id].addEdge(i, totalStates);
			totalStates++;
			LR1States.emplace(make_pair(newState.id, newState));
			statesToDo.push(newState.id);
			//newState.printState();

		}
		/*
		for (auto& i : nextSymbols) {
			if (myFirst[i].size() == 1 && myFirst[i].count(myEpsilon)) {
				for (auto& item : LR1States[id].items) {
					if (item.pos + 1 < item.end && item.production.second[item.pos] == i) {
						string nextnext = item.production.second[item.pos + 1];
						LR1State newState = GOTO_Epsilon(LR1States[id], i, totalStates);
						int dst = contain(newState);
						if (dst >= 0) { LR1States[id].addEdge(nextnext, dst);continue; }

						LR1States[id].addEdge(nextnext, totalStates);
						totalStates++;
						LR1States.emplace(make_pair(newState.id, newState));
						statesToDo.push(newState.id);
						//newState.printState();
					}
				}
			}
		}
		*/
	}
	cout << "generate LR1 Parsing Table successfully! Total state: "<< totalStates << endl;
}

//负数-i代表规约编号i的语法规则   自然数代表状态
void LR1::generateParsingTable() {
	for (int i = 0; i < totalStates; i++) {
		parsing_table.emplace_back(map<string,int>());
		for (auto& edge : LR1States[i].edges) {
			parsing_table[i].emplace(make_pair(edge.first, edge.second));
		}
		for (auto& item : LR1States[i].items) {
			if (item.pos == item.end) {
				vector<string> p(1,item.production.first);
				p.insert(p.end(), item.production.second.begin(), item.production.second.end());
				int id = find(grammar_names.begin(), grammar_names.end(), p)-grammar_names.begin() + 1;  //注意加一，保持全正数
				for (auto& predict : item.predict_set) {
					//发生了移进/规约冲突	
					if (parsing_table[i].count(predict)) {	
						if (SRconflict(predict, p)) {  //规约
							parsing_table[i][predict] = -id; //约定ruler编号的负数表示规约
						}
					}
					else {
						parsing_table[i].emplace(make_pair(predict, -id));
					}

				}
			}
		}
	}
}
//0移进  1规约
/*
a grammar rule's precedence is determined by looking at the precedence of its right-most terminal symbol
1.If the current token has higher precedence than the rule on the stack, it is shifted.
2.If the grammar rule on the stack has higher precedence, the rule is reduced.
3.If the current token and the grammar rule have the same precedence, the rule is reduced for left associativity, whereas the token is shifted for right associativity.
4.If nothing is known about the precedence, shift/reduce conflicts are resolved in favor of shifting (the default).
*/
bool LR1::SRconflict(const string& predict, const vector<string>& ruler) {
	int ruler_level = -1;
	for (int i = ruler.size() - 1; i > 0; i--) {
		if (VT_names.count(ruler[i]))ruler_level = VT[ruler[i]].first;
	}
	int predict_level = VT[predict].first;
	if (predict_level > ruler_level)return 0;  //case 1
	else if (predict_level < ruler_level)return 1; //case 2
	else {
		if (predict_level == -1)return 0; //case 4
		//case 3  左0右1
		if (VT[predict].second)return 0;  //右结合律-》移进
 		else return 0;    //左结合律-》规约
	}
}

void LR1::printParsingTable() {
	cout << endl <<"grammar ruler are as follows:" << endl;
	for (int i = 0; i < grammar_names.size();i++) {
		cout << i+1 << ". " << grammar_names[i][0] << " -> ";
		for (int j = 1; j < grammar_names[i].size(); j++)cout << grammar_names[i][j] << " ";
		cout << endl;
	}

	for (int i = 0; i < parsing_table.size(); i++) {
		cout << "------LR1 state: " << i <<"--------"<< endl;
		for (auto& g : parsing_table[i]) {
			if (g.second < 0)cout << g.first << ": reduce " << -g.second << endl;
			else {
				if(VT_names.count(g.first))cout << g.first << ": shift " << g.second << endl;
				else cout << g.first << ": goto " << g.second << endl;
			}
		}
	}
}

void LR1::printParsingTable2file() {
	ofstream ofs("LR1_Parsing_table.out");
	ofs << endl << "grammar ruler are as follows:" << endl;
	for (int i = 0; i < grammar_names.size();i++) {
		ofs << i + 1 << ". " << grammar_names[i][0] << " -> ";
		for (int j = 1; j < grammar_names[i].size(); j++)ofs << grammar_names[i][j] << " ";
		ofs << endl;
	}

	for (int i = 0; i < parsing_table.size(); i++) {
		ofs << "------LR1 state: " << i << "--------" << endl;
		for (auto& g : parsing_table[i]) {
			if (g.second < 0)ofs << g.first << ": reduce " << -g.second << endl;
			else {
				if (VT_names.count(g.first))ofs << g.first << ": shift " << g.second << endl;
				else ofs << g.first << ": goto " << g.second << endl;
			}
		}
	}
	ofs.close();
}

void LR1::generateDFA_BFS() {

	auto start = system_clock::now();

	queue<int> statesToDo;
	statesToDo.push(0);
	while (!statesToDo.empty()) {
		int id = statesToDo.front();
		statesToDo.pop();
		vector<string> nextSymbols = LR1States[id].getNextSymbol();
		for (auto& i : nextSymbols) {
			LR1State newState = GOTO(LR1States[id], i, totalStates);
			int dst = contain(newState);
			if (dst >= 0) { LR1States[id].addEdge(i, dst);continue; }

			LR1States[id].addEdge(i, totalStates);
			totalStates++;
			LR1States.emplace(make_pair(newState.id, newState));
			statesToDo.emplace(newState.id);
			//newState.printState();

		}
		for (auto& i : nextSymbols) {
			if (myFirst[i].size() == 1 && myFirst[i].count(myEpsilon)) {
				for (auto& item : LR1States[id].items) {
					if (item.pos + 1 < item.end && item.production.second[item.pos] == i) {
						string nextnext = item.production.second[item.pos + 1];
						LR1State newState = GOTO_Epsilon(LR1States[id], i, totalStates);
						int dst = contain(newState);
						if (dst >= 0) { LR1States[id].addEdge(nextnext, dst);continue; }

						LR1States[id].addEdge(nextnext, totalStates);
						totalStates++;
						LR1States.emplace(make_pair(newState.id, newState));
						statesToDo.emplace(newState.id);
						//newState.printState();
					}
				}
			}
		}
	}
	auto end = system_clock::now();
	auto duration = duration_cast<microseconds>(end - start);
	cout << "花费了"
		<< double(duration.count()) * microseconds::period::num / microseconds::period::den
		<< "秒" << endl;
	cout << "generate LR1 Parsing Table successfully! Total state: " << totalStates << endl;
}