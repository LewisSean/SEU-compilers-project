#include "DfaGraph.h"
#include <iostream>

void DfaGraph::addnode(Dfa node) {
	graph.emplace_back(node);
}

void DfaGraph::output() {
	for (int i = 0; i < graph.size(); i++) {
		cout << "node " << i << ' ' << graph[i].isEnd << ' ' << (graph[i].isEnd != -1 ? "final state\n" : "\n");
		for (auto it : graph[i].mp) {
			cout << '(' << char(it.first) << ',' << it.second << ") ";
		}
		cout << '\n';
	}
}