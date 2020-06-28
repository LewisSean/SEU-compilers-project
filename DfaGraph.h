#pragma once
#include "vector"
#include "Dfa.h"
using namespace std;

class DfaGraph{
public:
	vector<Dfa> graph;

	void addnode(Dfa node);

	void output();
};

