#include "Output.h"
#include "DfaGraph.h"
using namespace std;

void Output::variable_define(vector<string> &Declarations) {
	for (auto it : Declarations) o << it << endl;

	o << "#define MAXSIZE 10000" << endl;
	o << endl;
	o << "char buffer[MAXSIZE];" << endl;
	o << "int index = 0;" << endl;
	o << "int state = 0;" << endl;
	o << "int line = 0;" << endl;
	o << "int buf_idx = 0;" << endl;
	o << endl;
	
}

void Output::action_define(vector<Rules>& vRules) {
	o << "void action(int x) {" << endl;
	o << "	switch(x) {" << endl;
	for (int i = 0; i < vRules.size(); i++) {
	o << "		case " << i << ": {" << endl;
	o << "			";
	for (auto it : vRules[i].actions) o << it << ' ';
	o << endl;
	o << "			break;" << endl;
	o << "		}" << endl;
	}
	o << "	}" << endl;
	o << "}" << endl;
	o << endl;
}

void Output::scanner_define(DfaGraph &base) {
	o << "void scanner(char *str) {" << endl;
	o << "	char ch = ' ';" << endl;
	o << "	while(ch != EOF) {" << endl;
	o << "		ch = buffer[buf_idx++];" << endl;
	o << "		buffer[index++] = ch;" << endl;
	//o << "		printf(\"%d %c\\n\", state, ch);" << endl;
	o << "		switch(state) {" << endl;
	for (int i = 0; i < base.graph.size(); i++) {
	o << "			case " << i << ": {" << endl;
	bool use = false;
	bool cango = false;
	for (auto it : base.graph[i].mp) {
	if (!use) {
	o << "				if(ch ==  " << int(it.first) << ") {" << endl;
	use = true;
	}
	else {
	o << "				else if(ch ==  " << int(it.first) << ") {" << endl;
	}
	o << "					state = " << it.second << ";" << endl;
	o << "				}" << endl;
	cango = true;
	}
	if(cango)
	o << "				else {" << endl;
	if (base.graph[i].isEnd != -1) {
	o << "					buf_idx--;" << endl;
	o << "					index = 0;" << endl;
	o << "					state = 0;" << endl;
	o << "					action(" << base.graph[i].isEnd << ");" << endl;
	}
	else {
	o << "					printf(\"error occurs on line %d, state %d\\n\", line, state);" << endl;
	o << "					return ;" << endl;
	}
	if(cango)
	o << "				}" << endl;
	o << "				break;" << endl;
	o << "			}" << endl;
	}
	o << "		}" << endl;
	o << "	}" << endl;
	o << "}" << endl;
	o << endl;
	o << endl;
}

void Output::function_define(vector<string>& functions) {
	o << "char input() {" << endl;
	o << "	return buffer[buf_idx++];" << endl;
	o << "}" << endl;
	o << endl;
	for (auto it : functions) o << it << endl;
	o << endl;
	o << endl;
}

void Output::main_define() {
	o << "int main(int argc, char **args) {" << endl;
	o << "	if(argc == 1) {" << endl;
	o << "		puts(\"please input the path of the source file\");" << endl;
	o << "		exit(1);" << endl;
	o << "	}" << endl;
	o << "	else if(argc == 2) {" << endl;
	o << "		freopen(args[1], \"r\", stdin);" << endl;
	o << "		freopen(\"token.out\", \"w\", stdout);" << endl;
	o << "	}" << endl;
	o << "	else if(argc == 3) {" << endl;
	o << "		freopen(args[1], \"r\", stdin);" << endl;
	o << "		freopen(args[2], \"w\", stdout);" << endl;
	o << "	}" << endl;
	o << "	else {" << endl;
	o << "		puts(\"error command\");" << endl;
	o << "		exit(1);" << endl;
	o << "	}" << endl;
	o << "	char ch;" << endl;
	o << "	int cnt = 0;" << endl;
	o << "	do {" << endl;
	o << "		ch = getchar();" << endl;
	o << "		buffer[cnt++] = ch;" << endl;
	o << "	}while(ch != EOF);" << endl;
	o << "	scanner(buffer);" << endl;
	o << "	return 0;" << endl;
	o << "}" << endl;
}

void Output::output(DfaGraph &base, vector<Rules>& vRules, vector<string> &functions, vector<string>& Declarations, string outpath) {
	o.open(outpath, ios::out);
	variable_define(Declarations);
	function_define(functions);
	action_define(vRules);
	scanner_define(base);
	main_define();
	o.close();
}

