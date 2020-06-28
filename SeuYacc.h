#pragma once
#include<string>
#include<fstream>
#include<iostream>
#include"LR1.h"
#include"LALR1.h"
using namespace std;
//target:generate a yacc.tab.c source code to deal with input token sequence 
class SeuYacc {
public:
	ofstream outputFile;
	map<int, map<string, int>> my_parsing_table;
	SeuYacc(string& yaccFile, string& parsingFile);
	void generateMy_parsing_table(vector<map<string, int>>& parsing_table);
	void generateParsingProgram();
	void generateActionTableHeadFile(string& s, vector<vector<string>>& productions);
	//void reduce_tokenList(string tokensFile);
	void outputCode(string);
};