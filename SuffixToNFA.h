#include<iostream>
#include "Nfa.h"
#include<stack>
#include "NfaGraph.h"
#include "Suffix.h"
#include "ParseLex.h"
using namespace std;
typedef pair<int, int>P;

NfaGraph CreateNFA(string pattern);
NfaGraph CombineNFA(vector<Rules>rules);