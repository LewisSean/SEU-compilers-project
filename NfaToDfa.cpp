#include "NfaToDfa.h"
#include <algorithm>

DfaGraph NfaToDfa::transfer(NfaGraph base) {
	vector<unordered_set<int>> id;
	unordered_map<int, int> vis;
	unordered_set<int> now;
	base.getclosure(0, now);
	id.emplace_back(now);

	DfaGraph res;
	res.addnode(Dfa());

	for (auto it : now) {
		if (base.graph[it].isEnd != -1) {
			if (res.graph[0].isEnd == -1) res.graph[0].isEnd = base.graph[it].isEnd;
			else res.graph[0].isEnd = min(res.graph[0].isEnd, base.graph[it].isEnd);
		}
	}

	
	while (1) {
		int index = -1;
		for (int i = 0; i < id.size(); i++) {
			if (!vis[i]) {
				vis[i] = 1;
				index = i;
				break;
			}
		}
		if (index == -1) break;
		now = id[index];
		vector<int> go;
		for (auto u : now) {
			for (auto it : base.graph[u].mp) {
				if (it.first == epsilon)continue;
				go.emplace_back(it.first);
			}
		}
		
		sort(go.begin(), go.end());
		go.erase(unique(go.begin(), go.end()), go.end());
		
		for (auto i : go) {
			unordered_set<int> tmp;
			for (auto u : now) {
				auto g = base.graph[u].mp.equal_range(i);
				for (auto it = g.first; it != g.second; it++) {
					base.getclosure(it->second, tmp);
				}
			}
			if (!tmp.empty()) {
				Dfa node;
				for (auto it : tmp) {
					if (base.graph[it].isEnd != -1) {
						if (node.isEnd == -1) node.isEnd = base.graph[it].isEnd;
						else node.isEnd = min(node.isEnd, base.graph[it].isEnd);
					}
				}
				int has = -1;
				for (int j = 0; j < id.size(); j++) {
					if (id[j] == tmp) {
						has = j;
						break;
					}
				}
				if (has == -1) {
					id.emplace_back(tmp);
					res.addnode(node);
					has = id.size() - 1;
				}
				res.graph[index].addedge(i, has);
			}
		}
	}
	
	return res;
}
