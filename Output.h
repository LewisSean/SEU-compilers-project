#pragma once
#include <fstream>
#include "DfaGraph.h"
#include "ParseLex.h"
using namespace std;

class Output{
public:
	fstream o;
	void variable_define(vector<string> &Declarations);
	void function_define(vector<string>& functions);
	void scanner_define(DfaGraph &base);
	void action_define(vector<Rules> &vRules);
	void output(DfaGraph &base, vector<Rules>& vRules, vector<string>& functions, vector<string>& Declarations, string output);
	void main_define();
};

