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
			//���ӿ�ʼ�ڵ����ֹ�ڵ�
			downNode.graph[downNode.graph.size()-1].mp.insert(P(epsilon, upNode.graph[0].number));
			//���NFA
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
			//���ı��
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
			//NFA��������ֹ�ڵ�
			downNode.graph[downNode.graph.size()-1].mp.insert(P(epsilon, endNode.number));
			upNode.graph[upNode.graph.size() - 1].mp.insert(P(epsilon, endNode.number));
			//NFA�����¿�ʼ�ڵ�
			startNode.mp.insert(P(epsilon, downNode.graph[0].number));
			startNode.mp.insert(P(epsilon, upNode.graph[0].number));
			//�������NFA
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
			//���ı��
			for (auto& u : upNode.graph) {
				u.number = u.number + 1;
				for (auto& it : u.mp) {
					it.second++;
				}
			}
			//�¿�ʼ�ڵ�ֱ�����NFA����ֹ�ڵ�
			startNode.mp.insert(P(epsilon, upNode.graph[0].number));
			startNode.mp.insert(P(epsilon, endNode.number));
			//����NFA�Ŀ�ʼ�ڵ����ֹ�ڵ�
			upNode.graph[upNode.graph.size() - 1].mp.insert(P(epsilon, upNode.graph[0].number));
			//NFA������ֹ�ڵ�����
			upNode.graph[upNode.graph.size() - 1].mp.insert(P(epsilon, endNode.number));
			//���������NFA
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
			//���ı��
			for (auto& u : upNode.graph) {
				u.number = u.number + 1;
				for (auto& it : u.mp) {
					it.second++;
				}
			}
			//�¿�ʼ�ڵ�ֱ�����NFA����ֹ�ڵ�
			startNode.mp.insert(P(epsilon, upNode.graph[0].number));
			
			//����NFA�Ŀ�ʼ�ڵ����ֹ�ڵ�
			upNode.graph[upNode.graph.size() - 1].mp.insert(P(epsilon, upNode.graph[0].number));
			//NFA������ֹ�ڵ�����
			upNode.graph[upNode.graph.size() - 1].mp.insert(P(epsilon, endNode.number));
			//���������NFA
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
			//���ı��
			for (auto& u : upNode.graph) {
				u.number = u.number + 1;
				for (auto& it : u.mp) {
					it.second++;
				}
			}
			//�¿�ʼ�ڵ�ֱ�����NFA����ֹ�ڵ�
			startNode.mp.insert(P(epsilon, upNode.graph[0].number));
			startNode.mp.insert(P(epsilon, endNode.number));
			//NFA������ֹ�ڵ�����
			upNode.graph[upNode.graph.size() - 1].mp.insert(P(epsilon, endNode.number));
			//���������NFA
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
	cout << "���սڵ�Ϊ";
	for (auto i : idx)cout << i << " ";
<<<<<<< HEAD

}*/
