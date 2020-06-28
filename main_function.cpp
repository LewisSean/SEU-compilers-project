#include<cstdio>
#include<iostream>
#include<ctime>
#include<map>
#include<vector>
#include"Grammar.h"
#include"LR1.h"
#include"LALR1.h"
#include"SeuYacc.h"
#include"LexSolver.h"
using namespace std;



	/*
	Grammar g = Grammar("Cminus.y");
	for (auto i : g.VT)cout << i.first <<"\t"<< i.second.first << "\t" << i.second.second << endl;
	for (auto i : g.VN)cout << i << " ";
	cout << endl << g.startVN << endl;
	for (auto i : g.grammar) {
		cout << i.first << "->";
		for (vector<vector<string>>::iterator it = i.second.begin(); it != i.second.end(); it++) {
			if (it == i.second.end() - 1) {
				for (auto i : *it) {
					cout << i << " ";
				}
				cout << endl;
			}
			else {
				for (auto i : *it) {
					cout << i << " ";
				}
				cout << "| ";
			}
		}
	}
	g.getFirst();
	g.printFirst();
	LR1 parsingTable(g.grammar,g.myFirst, g.VT,g.VN, g.startVN);
	parsingTable.generateDFA();
	parsingTable.printStates();
	parsingTable.generateParsingTable();
	parsingTable.printParsingTable();
	LALR1 lalr1Table(parsingTable);
	if (lalr1Table.generateDFA()) {
		lalr1Table.printStates();
		lalr1Table.generateParsingTable();
		//lalr1Table.printParsingTable();
	}
	//for (auto& i : lalr1Table.LALR1states)cout << i.first << endl;
	return 0;
	*/

int main(int argc, char** args) {
	string source_file = "";
	string filename_lex = "";
	string filename_yacc = "";
	string outpath_lex = "";
	string outpath_yacc = "";
	if (argc != 4) {
		cout << "please input the correct path of the source file, lex file and Yacc file" << endl;
		exit(1);
	}
	if (argc == 4) {
		for (int i = 0; args[1][i]; i++) filename_lex += args[1][i];
		for (int i = 0; args[2][i]; i++) filename_yacc += args[2][i];
		for (int i = 0; args[3][i]; i++) source_file += args[3][i];
		outpath_lex = "lex.yy.c";
		outpath_yacc = "yacc.tab.cpp";
	}
	else {
		cout << "error command" << endl;
		exit(1);
	}
	LexSolver(filename_lex, outpath_lex);
	SeuYacc seuYacc(filename_yacc, outpath_yacc);
	return 0;
}
