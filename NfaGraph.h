#pragma once
#include "Nfa.h"
#include "vector"
#include <unordered_set>
using namespace std;

class NfaGraph {
public:
	vector<Nfa> graph;

	void addnode(Nfa node);

	void getclosure(int x, set<int>& res);

	void getclosure(int x, unordered_set<int>& res);

	set<int> getclosure(int x);
};

