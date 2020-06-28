#include "SuffixToNFA.h"
#include "Suffix.h"

typedef pair<int, int> P;

int number = 1;
NfaGraph CreateNFA(string pattern) {
	stack<NfaGraph>s;
	NfaGraph N;
	int n = pattern.size();
	for (int i = 0; i < n;i++) {
		char p = pattern[i];
		Nfa startNode, endNode;
		NfaGraph upNode, downNode;
		NfaGraph pushNFA;
		switch (p)
		{
		case '.':
			upNode = s.top();
			s.pop();
			downNode = s.top();
			s.pop();
			//连接开始节点和终止节点
			downNode.graph[downNode.graph.size()-1].mp.insert(P(epsilon, upNode.graph[0].number));
			//组成NFA
			pushNFA.graph.insert(pushNFA.graph.end(), downNode.graph.begin(), downNode.graph.end());
			pushNFA.graph.insert(pushNFA.graph.end(), upNode.graph.begin(), upNode.graph.end());
			upNode.graph.clear();
			downNode.graph.clear();			
			s.push(pushNFA);
			break;
		case '|':
			upNode = s.top();
			s.pop();
			downNode = s.top();
			s.pop();
			startNode.number = downNode.graph[0].number;
			number++;
			endNode.number = number;
			number++;
			//更改标号
			for (auto &d : downNode.graph) {
				d.number+=1;
				for (auto& it : d.mp) {
					it.second++;
				}
			}
			for (auto &u : upNode.graph) {
				u.number=u.number+1;
				for (auto& it : u.mp) {
					it.second++;
				}
			}
			//NFA连接新终止节点
			downNode.graph[downNode.graph.size()-1].mp.insert(P(epsilon, endNode.number));
			upNode.graph[upNode.graph.size() - 1].mp.insert(P(epsilon, endNode.number));
			//NFA连接新开始节点
			startNode.mp.insert(P(epsilon, downNode.graph[0].number));
			startNode.mp.insert(P(epsilon, upNode.graph[0].number));
			//组成完整NFA
			pushNFA.graph.push_back(startNode);
			pushNFA.graph.insert(pushNFA.graph.end(), downNode.graph.begin(), downNode.graph.end());
			pushNFA.graph.insert(pushNFA.graph.end(), upNode.graph.begin(), upNode.graph.end());
			pushNFA.graph.push_back(endNode);
			upNode.graph.clear();
			downNode.graph.clear();
			s.push(pushNFA);
			break;
		case '*':
			upNode = s.top();
			s.pop();
			startNode.number = upNode.graph[0].number;
			number++;
			endNode.number = number;
			number++;
			//更改标号
			for (auto& u : upNode.graph) {
				u.number = u.number + 1;
				for (auto& it : u.mp) {
					it.second++;
				}
			}
			//新开始节点分别连接NFA和终止节点
			startNode.mp.insert(P(epsilon, upNode.graph[0].number));
			startNode.mp.insert(P(epsilon, endNode.number));
			//连接NFA的开始节点和终止节点
			upNode.graph[upNode.graph.size() - 1].mp.insert(P(epsilon, upNode.graph[0].number));
			//NFA与新终止节点相连
			upNode.graph[upNode.graph.size() - 1].mp.insert(P(epsilon, endNode.number));
			//组成完整的NFA
			pushNFA.graph.push_back(startNode);
			pushNFA.graph.insert(pushNFA.graph.end(), upNode.graph.begin(), upNode.graph.end());
			pushNFA.graph.push_back(endNode);
			upNode.graph.clear();
			s.push(pushNFA);
			break;
		case '+':
			upNode = s.top();
			s.pop();
			startNode.number = upNode.graph[0].number;
			number++;
			endNode.number = number;
			number++;
			//更改标号
			for (auto& u : upNode.graph) {
				u.number = u.number + 1;
				for (auto& it : u.mp) {
					it.second++;
				}
			}
			//新开始节点分别连接NFA和终止节点
			startNode.mp.insert(P(epsilon, upNode.graph[0].number));
			
			//连接NFA的开始节点和终止节点
			upNode.graph[upNode.graph.size() - 1].mp.insert(P(epsilon, upNode.graph[0].number));
			//NFA与新终止节点相连
			upNode.graph[upNode.graph.size() - 1].mp.insert(P(epsilon, endNode.number));
			//组成完整的NFA
			pushNFA.graph.push_back(startNode);
			pushNFA.graph.insert(pushNFA.graph.end(), upNode.graph.begin(), upNode.graph.end());
			pushNFA.graph.push_back(endNode);
			upNode.graph.clear();
			s.push(pushNFA);
			break;
		case '?':
			upNode = s.top();
			s.pop();
			startNode.number = upNode.graph[0].number;
			number++;
			endNode.number = number;
			number++;
			//更改标号
			for (auto& u : upNode.graph) {
				u.number = u.number + 1;
				for (auto& it : u.mp) {
					it.second++;
				}
			}
			//新开始节点分别连接NFA和终止节点
			startNode.mp.insert(P(epsilon, upNode.graph[0].number));
			startNode.mp.insert(P(epsilon, endNode.number));
			//NFA与新终止节点相连
			upNode.graph[upNode.graph.size() - 1].mp.insert(P(epsilon, endNode.number));
			//组成完整的NFA
			pushNFA.graph.push_back(startNode);
			pushNFA.graph.insert(pushNFA.graph.end(), upNode.graph.begin(), upNode.graph.end());
			pushNFA.graph.push_back(endNode);
			upNode.graph.clear();
			s.push(pushNFA);
			break;
		default:
			if (p == '`') p = pattern[++i];
			startNode.number = number;
			number++;
			endNode.number = number;
			number++;
			startNode.mp.insert(P(p, endNode.number));
			pushNFA.graph.push_back(startNode);
			pushNFA.graph.push_back(endNode);
			s.push(pushNFA);
			break;
		}
	}
	N = s.top();
	return N;
}

NfaGraph CombineNFA(vector<Rules>rules) {
	queue<NfaGraph>q;
	NfaGraph ans;
	Nfa startnode;
	ans.graph.push_back(startnode);
	for (int i = 0; i < rules.size();i++) {
		string r = rules[i].pattern;
		string s = InfixToSuffix(r);
		NfaGraph nfa=CreateNFA(s);
		nfa.graph[nfa.graph.size() - 1].isEnd = i;
		ans.graph[0].mp.insert(P(epsilon, nfa.graph[0].number));
		ans.graph.insert(ans.graph.end(), nfa.graph.begin(), nfa.graph.end());
	}
	return ans;
}

/*
int main(){
>>>>>>> Freesia
	//string s = "(a*.b|a.c)*";
	vector<Rules>rules;
	vector<string>action;
	rules.push_back(Rules{"`+.b",action });
	rules.push_back(Rules{ "a|`|" ,action });
	rules.push_back(Rules{ "a*" ,action });
	rules.push_back(Rules{ "a?" ,action });
	NfaGraph N = CombineNFA(rules);
	vector<int>idx;
	for (auto n : N.graph) {
		cout << n.number << endl;
		for (auto& it : n.mp) {
			cout << it.first << "-" << it.second << "   ";
		}
		cout << endl;
		if (n.isEnd)idx.push_back( n.number);
	}
	cout << "最终节点为";
	for (auto i : idx)cout << i << " ";
<<<<<<< HEAD

}*/
