#pragma once
#include<iostream>
#include<vector>
#include <fstream>
#include <string>
#include<map>
#include<algorithm>
#include<stack>
using namespace std;

typedef struct {
	string pattern; 
	vector<string> actions;
} Rules;

vector<string> split(string s);
string& trim(string& s);
int ReadLex(string filename, map<string, string>& m, vector<string>& Declarations, vector<Rules>& vRules, vector<string>& functions);

