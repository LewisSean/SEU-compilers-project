#include "NormalizeRE.h"

void HandleBrace(string& s,map<string,string>&mp) {
	string stmt = "";
	bool brace = false;
	int n = s.size();
	string ans = "";
	for (int i = 0; i < n; i++) {
		if (s[i] == '{'&&(i==0||s[i-1]!='`')) {
			brace = true;
			stmt = "";
			continue;
		}
		else if (s[i] =='}'&&brace&&(i==0||s[i-1]!='`')) {
			brace = false;
			map<string, string>::iterator iter = mp.find(stmt);
			if (iter != mp.end()) ans += iter->second;
			continue;
		}
		else if (brace) {
			stmt += s[i];
			continue;
		}
		ans += s[i];
	}
	s = ans;
}

void HandleEscape(string& s, bool in) {
	string ans="";
	bool flag = false;//是否转义
	for (auto& c : s) {
		if (in) {//转义[]内的所有可能字符
			if (flag) {
				switch (c) {
				case 'n':
					ans += '\n';
					break;
				case 't':
					ans += '\t';
					break;
				case 'v':
					ans += '\v';
					break;
				case 'f':
					ans += '\f';
					break;
				case '\\':
					ans += '\\';
					break;
				}
				flag = false;
				continue;
			}
			//碰到/下一个字符即将转义
			if (c == '\\') {
				flag = true;
				continue;
			}
		}
		else {
			if (flag) {
				flag = false;
				if (c == '\"' || c == '\\') ans = ans.substr(0, ans.size() - 1);
			}
			else if (c == '\\') {
				flag = true;
			}
		}
		ans += c;
	}
	s = ans;
}

void getSet(set<char>&charSet,const string& rec,bool flag) {
	string stemp(rec);
	HandleEscape(stemp, true);
	auto it = stemp.cbegin();
	set<char> newSet;
	while (it != stemp.cend()) {
		if (*it == '-' && ((it) != stemp.cbegin()) && ((it + 1) != stemp.cend()) && isalnum(*(it - 1)) && isalnum(*(it + 1))) {
			//当前字符是-，前后都有字符，且都是字母或数字
			auto startit = ALLSET.find(*(it - 1)) + 1;
			auto endit = ALLSET.find(*(it + 1));
			while (startit != endit) {
				newSet.insert(ALLSET[startit]);
				++startit;
			}
			++it;
		}
		else {
			newSet.insert(*it);
			++it;
		}
	}
	if (flag) {
		for (auto c : ALLSET) {
			if (newSet.find(c) == newSet.end()) charSet.insert(c);
		}
	}
	else charSet = newSet;
}

void HandleBrackets(string& s) {
	string rec;
	string ans="";
	bool Brackets = false;
	int n = s.size();
	for (int i = 0; i < n; i++) {
		if (s[i] == '[' && (i == 0 || s[i - 1] != '`')) {
			Brackets = true;
			rec = "";
			continue;
		}
		else if (s[i] == ']' && Brackets && (i == 0 || s[i - 1] != '`')) {
			Brackets = false;
			ans += '(';
			set<char>charSet;
			if (rec[0] == '^')getSet(charSet, rec.substr(1, rec.size() - 1), true);
			else getSet(charSet, rec, false);
			for (auto c : charSet) {
				if (ESCAPEDCHARS.find(c) != ESCAPEDCHARS.end())ans += '`';
				ans += c;
				ans += '|';
			}
			ans.erase(ans.end() - 1);
			ans += ')';
			continue;
		}
		else if (Brackets) {
			rec += s[i];
			continue;
		}
		ans += s[i];
	}
	s = ans;
}

void HandleQuote(string& s) {
	bool quote = false;
	int n = s.size();
	string ans = "";
	for (int i = 0; i < n; i++) {
		if (s[i] == '\"' && ((i != 0 && s[i - 1] != '\\') || i == 0)) {
			if (!quote) {
				quote = true;
				continue;
			}
			else {
				quote = false;
				continue;
			}
		}
		else if (quote && ESCAPEDCHARS.find(s[i]) != ESCAPEDCHARS.end()) ans += '`';
		ans += s[i];
	}
	s = ans;
}

void HandleDot(string& s) {
	string ans="";
	int n = s.size();
	for (int i = 0; i < n; i++) {
		if (s[i] == '.' && (i == 0 || (i != 0 && s[i - 1] != '`'))) {
			ans += '(';
			set<char>charset;
			getSet(charset, "\n", true);
			for (auto c : charset) {
				if (ESCAPEDCHARS.find(c) != ESCAPEDCHARS.end())ans += '`';
				ans += c; ans += '|';
			}
			ans.erase(ans.end() - 1);
			ans += ')';
			continue;
		}
		ans += s[i];
	}
	s = ans;
}

void AddDot(string& s) {
	string rec = s;
	string ans="";
	int n = s.size();
	for (int i = 0; i < n; i++) {
		ans += rec[i];
		if (rec[i] == '`')continue;
		if ((rec[i] == '(' || rec[i] == '|') && (i == 0 || rec[i - 1] != '`'))continue;
		if (i == n - 1)continue;
		if (rec[i + 1] == '|' || rec[i + 1] == '*' || rec[i + 1] == ')'|| rec[i + 1] == '?'|| rec[i + 1] == '+')continue;
		ans += '.';
	}
	s = ans;
}

void RENormalization(vector<Rules>& re, map<string, string>& mp) {
	for (auto& m : mp) {
		HandleQuote(m.second);

		HandleBrace(m.second, mp);
	}

	for (auto& r : re) {

		HandleQuote(r.pattern);
		HandleBrace(r.pattern, mp);
	    HandleBrackets(r.pattern);
		HandleDot(r.pattern);
		HandleEscape(r.pattern,false);
		AddDot(r.pattern);
	}
	
}

