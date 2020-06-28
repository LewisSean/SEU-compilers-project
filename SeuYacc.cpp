#include<cstdio>
#include<iostream>
#include<ctime>
#include<map>
#include<vector>
#include<stack>
#include<list>
#include"Grammar.h"
#include"LR1.h"
#include"LALR1.h"
#include"SeuYacc.h"
using namespace std;
SeuYacc::SeuYacc(string& s1, string& s2) {
	// s1: 输入的yacc文件  s2：解析的yacc.tab.c文件
	// to do
	Grammar g = Grammar(s1);
	g.getFirst();
	LR1 lr1(g.grammar, g.myFirst, g.VT, g.VN, g.startVN);
	lr1.generateDFA();
	lr1.printStates2file();
	lr1.generateParsingTable();
	lr1.printParsingTable2file();
	
	LALR1 lalr1Table(lr1);
	if (lalr1Table.generateDFA_v2()) {
		lalr1Table.printStates2file();
		lalr1Table.generateParsingTable();
		lalr1Table.printParsingTable2file();
	}
	generateMy_parsing_table(lr1.parsing_table);

	outputFile.open(s2);
	generateActionTableHeadFile(s2, lr1.grammar_names);
	generateParsingProgram();
	outputFile.close();
}
void SeuYacc::generateMy_parsing_table(vector<map<string, int>>& parsing_table) {
	int state = 0;
	for (auto& tableItem : parsing_table) {
		my_parsing_table.emplace(make_pair(state++, tableItem));
	}
}
void SeuYacc::generateActionTableHeadFile(string& s, vector<vector<string>>& productions) {
	string output_path;
	if (s.find_last_of("/") != string::npos) 
		output_path = s.substr(0, s.find_last_of("/")) + "/yacc.tab.h";
	else output_path = "yacc.tab.h";
	ofstream of(output_path);
	of << "#pragma once" << endl;
	of << "#include<vector>" << endl;
	of << "#include<string>" << endl;
	of << "#include<stack>" << endl;
	of << "#include<fstream>" << endl;
	of << "#include<map>" << endl;
	of << "#include<list>" << endl;
	of << "#include<iostream>" << endl;
	of << "using namespace std;" << endl;
	of << "map<int, map<string, int>> my_parsing_table;" << endl;
	of << "string getProduction(int id) {" << endl;
	of << "	switch (id) {" << endl;
	int id = 1;
	for (auto& production : productions) {
		of << "		case " << id++ << ": return \"";
		int pos = 0;
		for (auto token : production) {
			of << token << " ";
			if (++pos == 1)of << "-> ";
		}
		of << "\";" << endl;
	}
	of << "		default: return \"reduce error!\";" << endl;
	of << "	}" << endl;
	of << "}" << endl<<endl;


	of << "pair<string, int> getReduceInfo(int state) {" << endl;
	of << "	switch (state) {" << endl;
	id = 1;
	for (auto& production : productions) {
		of << "		case " << id++ << ": return make_pair(\"" << production[0] << "\", " << production.size()-1 << " );" << endl;
	}
	of << "		default: return pair<string,int>(\"\", 0);" << endl;
	of << "	}" << endl;
	of << "}" << endl;

	of << "void genereateParsingTable(){" << endl;
	of << "	map<string, int> tmp;" << endl;
	for (auto& p : my_parsing_table) {
		of << "	//------------state " << p.first <<"-----------"<< endl;
		for (auto& i : p.second) {
			of << "	tmp.emplace(make_pair(\""<<i.first<<"\", "<<i.second<<"));" << endl;
		}
		of << "	my_parsing_table.emplace(make_pair("<<p.first<<", move(tmp)));" << endl;
		of << "	tmp.clear();" << endl<< endl;
		
	}
	of << "}" << endl;

	of << "void reduce_tokenList(string tokensFile) {" << endl;
	of << "genereateParsingTable();" << endl;
	of << "	typedef pair<string, string> token;" << endl;
	of << "	typedef pair<int, token> stackItem;" << endl;
	of << "	deque<stackItem> stack;" << endl;
	of << "	ifstream ifs(tokensFile);" << endl;
	of << "	list<token> tokenList;" << endl;
	of << "	token mytoken;" << endl;
	of << "	//string useless;" << endl;
	of << "	while (ifs >> mytoken.first) {" << endl;
	of << "		if (mytoken.first == \"SPACE\")continue;" << endl;
	of << "		mytoken.second = mytoken.first;" << endl;
	of << "		tokenList.emplace_back(mytoken);" << endl;
	of << "	}" << endl;
	of << "	ifs.close();" << endl;
	of << "	tokenList.emplace_back(make_pair(\"$\", \"$\"));" << endl;
	of << "	stack.emplace_back(make_pair(0, make_pair(\"$\", \"$\")));" << endl;
	of << "	cout << endl << endl << \"-----------reduce sequence---------\" << endl;" << endl;
	of << "	auto point = tokenList.begin();" << endl;
	of << "	while (point != tokenList.end()) {" << endl;
	of << "		auto action = my_parsing_table.find(stack.back().first)->second.find(point->first);" << endl;
	of << "		if (action->second >= 0) { // shift" << endl;
	of << "			stack.emplace_back(make_pair(action->second, *point));" << endl;
	of << "			point++;" << endl;
	of << "		}" << endl;
	of << "		else if (action->second < 0 && stack.back().first != 1) { // reduce" << endl;
	of << "			auto item = getReduceInfo(-action->second);" << endl;
	of << "			for (int i = 0; i < item.second; i++)stack.pop_back();" << endl;
	of << "			auto tableItem = my_parsing_table.find(stack.back().first);" << endl;
	of << "			auto nextAction = tableItem->second.find(item.first);" << endl;
	of << "			if (nextAction == tableItem->second.end())break;" << endl;
	of << "			int nextState = nextAction->second;" << endl;
	of << "			stack.emplace_back(make_pair(nextState, make_pair(item.first, item.first)));" << endl;
	of << "			cout << getProduction(-action->second) << endl;" << endl;
	of << "		}" << endl;
	of << "		else if (action->second < 0 && stack.back().first == 1) {" << endl;
	of << "			if (getReduceInfo(-action->second).first == \"S\") {" << endl;
	of << "				cout << getProduction(-action->second) << endl;" << endl;
	of << "				cout << \"compile success\" << endl;" << endl;
	of << "				break;" << endl;
	of << "			}" << endl;
	of << "			else break;" << endl;
	of << "		}" << endl;
	of << "	}" << endl;
	of << "}" << endl;

	of.close();
}

void SeuYacc::generateParsingProgram() {
	//ofstream outputFile;
	outputFile << "#include \"yacc.tab.h\"" << endl;
	outputFile << "#include<iostream>" << endl;
	outputFile << "int main(int argc, char *argv[]) {" << endl;
	outputFile << "	if (argc < 2) {" << endl;
	outputFile << "	cout << \"please input the target source file name\" << endl;" << endl;
	outputFile << "	return 1;" << endl;
	outputFile << "	}" << endl;
	outputFile << "	reduce_tokenList(argv[1]);" << endl;
	outputFile << "	return 0;" << endl;
	outputFile << "}" << endl;

}

void SeuYacc::outputCode(string filename) {
	ifstream ifs(filename);
	ofstream ofs(filename.substr(0, filename.find_last_of("."))+"_buffer.txt");
	string tmp;
	while (!ifs.eof()) {
		getline(ifs, tmp);
		if (tmp == "")continue;
		int pos = 0;
		while (tmp.find("\"", pos) != string::npos) {
			pos = tmp.find("\"", pos);
			tmp.replace(pos, 1, "\\\"");
			pos += 2;
		}
		string codeLine = "\tof <<\""+ tmp+"\" << endl;";
		ofs << codeLine << endl;
	}
	ifs.close();
	ofs.close();
}
/*
void SeuYacc::reduce_tokenList(string tokensFile) {
	typedef pair<string, string> token;
	typedef pair<int, token> stackItem;
	deque<stackItem> stack;
	ifstream ifs(tokensFile);
	list<token> tokenList;
	token mytoken;
	//string useless;
	while (ifs >> mytoken.first) {
		if (mytoken.first == "SPACE")continue;
		mytoken.second = mytoken.first;
		tokenList.emplace_back(mytoken);
	}
	ifs.close();

	tokenList.emplace_back(make_pair("$", "$"));
	stack.emplace_back(make_pair(0, make_pair("$", "$")));

	cout << endl << endl << "-----------reduce sequence---------" << endl;

	auto point = tokenList.begin();
	while (point != tokenList.end()) {
		auto action = my_parsing_table.find(stack.back().first)->second.find(point->first);
		if (action->second >= 0) { // shift
			stack.emplace_back(make_pair(action->second, *point));
			point++;
		}
		else if (action->second < 0 && stack.back().first != 1) { // reduce
			auto item = getReduceInfo(-action->second);
			for (int i = 0; i < item.second; i++)stack.pop_back();
			auto tableItem = my_parsing_table.find(stack.back().first);
			auto nextAction = tableItem->second.find(item.first);
			if (nextAction == tableItem->second.end())break;
			int nextState = nextAction->second;
			stack.emplace_back(make_pair(nextState, make_pair(item.first, item.first)));

			cout << getProduction(-action->second) << endl;
		}
		else if (action->second < 0 && stack.back().first == 1) {
			if (getReduceInfo(-action->second).first == "S") {
				cout << getProduction(-action->second) << endl;
				cout << "compile success" << endl;
				break;
			}
			else break;
		}
	}
}
*/

