#include "NfaGraph.h"
#include <ctime>
using namespace std;

void NfaGraph::addnode(Nfa node) {
	graph.emplace_back(node);
}

void NfaGraph::getclosure(int x, set<int>& res) {
	if (res.count(x)) return;
	res.insert(x);
	auto go = graph[x].mp.equal_range(epsilon);
	for (auto it = go.first; it != go.second; it++) {
		getclosure(it->second, res);
	}
}

void NfaGraph::getclosure(int x, unordered_set<int>& res) {
	if (res.count(x)) return;
	res.emplace(x);
	auto go = graph[x].mp.equal_range(epsilon);
	for (auto it = go.first; it != go.second; it++) {
		getclosure(it->second, res);
	}
}

set<int> NfaGraph::getclosure(int x) {
	set<int> res;
	getclosure(x, res);
	return res;
}

/*int main() {
	NfaGraph g;
	g.node[1].mp.emplace(epsilon, 2);
	g.node[1].mp.emplace(epsilon, 3);
	g.node[2].mp.emplace(epsilon, 5);
	g.node[3].mp.emplace(epsilon, 4);
	g.node[5].mp.emplace('a', 6);
	set<int> res = g.getclosure(1);
	for (auto it = res.begin(); it != res.end(); it++) {
		cout << (*it) << '\n';
	}
	return 0;
}*/
