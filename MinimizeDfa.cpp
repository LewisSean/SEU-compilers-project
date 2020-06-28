#include "MinimizeDfa.h"
#include <algorithm>
#include <vector>
#include <iostream>
#include <set>
using namespace std;

DfaGraph MinimizeDfa::Minimize(DfaGraph base) {
	vector<int> go;
	for (int i = 0; i < base.graph.size(); i++) {
		for (auto it : base.graph[i].mp) {
			go.emplace_back(it.first);
		}
	}
	sort(go.begin(), go.end());
	go.erase(unique(go.begin(), go.end()), go.end());

	map<int, int> id;
	map<int, set<int> > rk;

	int idx = -1;
	vector<int> endState;

	for (int i = 0; i < base.graph.size(); i++) {
		if (base.graph[i].isEnd != -1) endState.emplace_back(base.graph[i].isEnd);
	}

	sort(endState.begin(), endState.end());
	endState.erase(unique(endState.begin(), endState.end()), endState.end());

	for (int i = 0; i < base.graph.size(); i++) {
		if (base.graph[i].isEnd != -1) {
			int t = lower_bound(endState.begin(), endState.end(), base.graph[i].isEnd) - endState.begin();
			id[i] = t;
			rk[t].emplace(i);
		}
		else {
			rk[endState.size()].emplace(i);
			id[i] = endState.size();
		}
	}
	idx = endState.size();
	cout << "test: " << base.graph.size() << ' ' << idx << '\n';
	//排除没有非终结状态的情况
	
	if (rk[idx].empty()) {
		idx--;
	}

	DfaGraph res;

	while (1) {
		bool finish = false;
		for (int i = 0; i <= idx; i++) {
			vector<vector<int> > all;
			for (auto it : rk[i]) {
				vector<int> tmp;
				for (auto c : go) {
					if (base.graph[it].mp.count(c)) {
						tmp.emplace_back(id[base.graph[it].mp[c]]);
					}
					else tmp.emplace_back(-1);
				}
				all.emplace_back(tmp);
			}
			sort(all.begin(), all.end());
			all.erase(unique(all.begin(), all.end()), all.end());
			

			if (all.size() > 1) {
				finish = true;
				vector<pair<int, int> > change;
				for (auto it : rk[i]) {
					vector<int> tmp;
					for (auto c : go) {
						if (base.graph[it].mp.count(c)) {
							tmp.emplace_back(id[base.graph[it].mp[c]]);
						}
						else tmp.emplace_back(-1);
					}
					int index = lower_bound(all.begin(), all.end(), tmp) - all.begin();
					 
					if (index) {
						change.emplace_back(it, index);
					}
				}
				for (auto it : change) {
					rk[i].erase(it.first);
					rk[idx + it.second].emplace(it.first);
					id[it.first] = idx + it.second;
				}
				idx += all.size() - 1;
				break;
			}
		}
		

		if (!finish) break;
	}
	
	/*for (int i = 0; i <= idx; i++) {
		for (auto it : rk[i]) cout << it << " "; cout << '\n';
	}
	for (int i = 0; i < base.graph.size(); i++) cout << id[i] << " "; cout << '\n';*/
	
	
	//把原图0号点换到新图的0号点
	cout << "test: " << idx << '\n';
	if (id[0] != 0) {
		int tmp = id[0];
		for (auto it : rk[0]) id[it] = tmp;
		for (auto it : rk[tmp]) id[it] = 0;
		swap(rk[0], rk[tmp]);
	}

	for (int i = 0; i <= idx; i++) {
		res.graph.emplace_back(Dfa());
		for (auto it : rk[i]) {
			if (base.graph[it].isEnd != -1) res.graph.back().isEnd = base.graph[it].isEnd;
		}
		for (auto c : go) {
			auto &now = base.graph[*rk[i].begin()].mp;
			if (now.find(c) != now.end()) {
				res.graph.back().mp[c] = id[now[c]];
			}
		}
	}
	return res;
}
