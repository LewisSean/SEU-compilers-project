#include "ParseLex.h"

vector<string>split(string s) {
	vector<string>ans;
	int n =s.size();
	if (n== 0)return ans;
	int start = 0;
	for (int i = 0; i < n; i++) {
		if (s[i] != ' ' && s[i] != '\t') {
			start = i;
			while (s[i] != ' ' && s[i] != '\t'&&i<n) {
				i++;
			}
			ans.push_back(s.substr(start, i - start));
		}
	}
	return ans;
}

string& trim(string& s)
{
	if (s.size() == 0)return s;
	s.erase(0, s.find_first_not_of('\t'));
	s.erase(0, s.find_first_not_of(' '));
	s.erase(s.find_last_not_of(' ') + 1);
	s.erase(s.find_last_not_of('\t') + 1);
	return s;
}


int ReadLex(string filename, map<string, string>& mp,vector<string>&Declarations, vector<Rules>& vRules,vector<string>& functions) {
	//读入文件
	ifstream infile;
	infile.open(filename, ios::in);
	if (!infile)
	{
		cout << "Open failed!" << endl;
		return 1;
	}

	string line;	//用来存储每行的字符串
	int nowloc = 0;//现在处于哪个区域
	vector<string> res;	//用来暂存字符串分割的结果；
	int linecnt = 0;	
	bool hasError = false;	//标识是否有错误，有错误立即终止解析
	bool Braces = false;	//是否发现上括弧
	bool Marks = false; //是否发现上引号
	bool Brackets = false;//是否发现上中括号
	string left;	
	string right;	
	vector<string>action;

	while (!infile.eof() && !hasError) {
		getline(infile, line);
		linecnt++;
		//若某行为空，直接跳过
		if (line.empty())continue;
		switch (nowloc){
		case 0:
			if (line.compare("%{") == 0)nowloc++;
			else{
				cout << "ERROR: No entry sign %{ " << endl;
				hasError = true;
			}
			break;
		case 1:
			if (line.compare("%}") == 0)nowloc++;
			else{
				Declarations.push_back(line);
			}
			break;
		case 2:
			if (line.compare("%%") == 0)nowloc++;
			else{
				res = split(line);
				mp.insert(pair<string, string>(res[0], res[1]));
			}
			break;
		case 3:
			if (line.compare("%%") == 0)nowloc++;
			else{
				trim(line);
				if (Braces && line.compare("}") != 0){
					action.push_back(line);
					Braces = true;
					break;
				}
				if (Braces && line.compare("}") == 0){
					vRules.push_back(Rules{ left, action });
					action.clear();
					Braces = false;
					break;
				}
				if (!Braces){
					if (line[0] == '['){
						Brackets = true;
						int i = 1;
						for (i = 1; i < line.size(); i++){
							if (line[i] == ']')Brackets = !Brackets;
							if ((line[i + 1] == ' ' || line[i + 1] == '\t') && Brackets == false)break;
						}
						left = line.substr(0, i + 1);
						right = line.substr(i + 1);
						trim(right);
					}
					if (line[0] == '\"'){
						Marks = true;
						int i = 1;
						for (i = 1; i < line.size(); i++){
							if (line[i] == '\"')Marks = !Marks;
							if ((line[i + 1] == ' ' || line[i + 1] == '\t') && Marks == false)break;
						}
						left = line.substr(0, i + 1);
						right = line.substr(i + 1);
						trim(right);
					}
					if (line[0] != '\"' && line[0] != '['){
						int i = 0;
						for (i = 0; i < line.size(); i++){
							if (line[i] == ' ' || line[i] == '\t')break;
						}
						left = line.substr(0, i);
						right = line.substr(i, line.size());
						trim(right);
					}
					if (right.compare("{") != 0) {
						action.push_back(right);
						vRules.push_back(Rules{ left, action });
						action.clear();
					}
					if (right.compare("{") == 0)Braces = true;
				}
			}
			break;
		case 4:
			functions.push_back(line);
			break;
		}
	}
	infile.close();
	return 0;
}


/*
int main() {
	//ReadLex(string filename, map<string, string> & m, vector<string> & Declarations, vector<Rules> & vRules, vector<string> & functions)
	vector<string>d;
	vector<string>f;	
	vector<Rules>vRules;
	map<string, string>m;
	string filename = "C:/Users/Nemo Sherry/Desktop/09015112-刘宗源/SeuLex/input_files/lex.l";
	ReadLex(filename,m,d,vRules,f);
	for (auto v : vRules) {
		cout << "pattern:" << v.pattern << endl;
		cout << "action:";
		for (auto a : v.actions)cout << a << " ";
		cout << endl;
	}
	for (auto& it : m) {
		cout << it.first << " " << it.second << endl;
	}
	for (auto ff : f) {
		cout << ff<< endl;
	}
}
*/