#pragma once
#include<vector>
#include<map>
#include<set>
#include<string>
using namespace std;


const string myEpsilon = "#";
/*
class MyOperator {
public:
    int prior;
    bool LorR;   //����0 �ҽ��1
    MyOperator(int p, bool L) { prior = p;LorR = L; } 
};
*/
class Grammar {
public:
	map<string, vector<vector<string>>> grammar;
	set<string> VT_name;
    set<string> VN;
    map<string, set<string>> myFirst;
	//map<string,int> left;
	//map<string,int> right;
    map<string, pair<int,int>> VT;    // pair<level, assoc>    
    string startVN;

	bool getGrammar(istream& input);
	Grammar(string filename);
    void getFirst();
    void getVNFirst();
    void printFirst();
    void filterVT(vector<string>& production);

	string trim(string s) {
        if (s.empty()){
            return s;
        }
        s.erase(0, s.find_first_not_of(" "));
        s.erase(s.find_last_not_of(" ") + 1);
        s.erase(0, s.find_first_not_of("\t"));
        s.erase(s.find_last_not_of("\t") + 1);
        return s;
	}

    void split(string& str,vector<std::string>& tokens,const string delim = " ") {
        tokens.clear();
        for (int i = 0; i < str.length(); i++) {
            if (str[i] == '\t')str[i] = ' ';
        }
        auto start = str.find_first_not_of(delim, 0);       // �ָ���ַ����ĵ�һ���ַ�
        auto position = str.find_first_of(delim, start);    // �ָ�����λ��
        while (position != string::npos || start != std::string::npos) {
            // [start, position) Ϊ�ָ��������ַ���
            tokens.emplace_back(move(str.substr(start, position - start)));
            start = str.find_first_not_of(delim, position);
            position = str.find_first_of(delim, start);
        }
    }

};