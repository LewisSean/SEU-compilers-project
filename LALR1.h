#pragma once
#include"LR1.h"
using namespace std;

class LALR1 {
public:
	LR1 lr1;
	map<int, LR1State> LALR1states;
	map<int, int> combined_states;
	map<int, map<string, int>> parsing_table;

	LALR1(LR1 target) { lr1 = target; }
	bool generateDFA();
	bool generateDFA_v2();
	bool RRconflict(vector<Item>&);
	void printStates() {
		for (auto& s : LALR1states)
			s.second.printState();
	}
	void printStates2file() {
		ofstream ofs("LALR1_States.out");
		for (auto& s : LALR1states)
			s.second.printState2file(ofs);
		ofs.close();
	}
	void generateParsingTable();
	void printParsingTable();
	void printParsingTable2file();
};