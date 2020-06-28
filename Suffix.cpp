#include "Suffix.h"

/*
当前优先级为
1	*+？
2	.
3	|
4	()
*/

string InfixToSuffix(string pattern) {
	string res = "";
	stack<char>s;
	queue<char>q;
	int n = pattern.size(); 
	for (int i = 0; i < n;i++) {
		if (pattern[i] == '(') s.push(pattern[i]);
		else if (pattern[i] == ')') {
			while (s.top() != '(') {
				q.push(s.top());
				s.pop();
			}
			s.pop();
		}
		else if (pattern[i] == '.') {
			if (s.empty())s.push(pattern[i]);
			else if (s.top() == '.' || s.top() == '*' || s.top() == '+' || s.top() == '?') {
				while (!s.empty() && (s.top() == '.' || s.top() == '*' || s.top() == '+' || s.top() == '?')) {
					q.push(s.top());
					s.pop();
				}
				s.push(pattern[i]);
			}
			else s.push(pattern[i]);
		}
		else if (pattern[i] == '|') {
			if (s.empty())s.push(pattern[i]);
			else if (s.top() == '|' || s.top() == '*' || s.top() == '+' || s.top() == '?' || s.top() == '.') {
				while (!s.empty() && (s.top() == '|' || s.top() == '*' || s.top() == '+' || s.top() == '?' || s.top() == '.')) {
					q.push(s.top());
					s.pop();
				}
				s.push(pattern[i]);
			}
			else s.push(pattern[i]);
		}
		else if (pattern[i] == '*' || pattern[i] == '?' || pattern[i] == '+')s.push(pattern[i]);
		else if (pattern[i] == '`' && (pattern[i + 1] == '(' || pattern[i + 1] == ')'
			|| pattern[i + 1] == '|' || pattern[i + 1] == '.' || pattern[i + 1] == '*')) {
			q.push(pattern[i]);
			q.push(pattern[i + 1]);
			++i;
		}
		else if (pattern[i] == '`' && (pattern[i + 1] == '?' || pattern[i + 1] == '+' || pattern[i + 1] == '{' || pattern[i + 1] == '}' || pattern[i + 1] == '[' || pattern[i + 1] == ']')) {
			q.push(pattern[i]);
			q.push(pattern[i + 1]);
			++i;
		}
		else q.push(pattern[i]);
	}
	while (!s.empty()) {
		q.push(s.top());
		s.pop();
	}
	while (!q.empty()) {
		res += q.front();
		q.pop();
	}
	return res;
}
/*
int main() {
	string p= "(a.`+|b.`?.`*)*+?";
	string a=InfixToSuffix(p);
	cout << a;
	vector<int>t{ 1,2,3,4 };
	for (auto k : t) {
		cout << k;
		k++;
	}
		
	
}
*/