#include "NfaToDfa.h"
#include "MinimizeDfa.h"
#include "Output.h"
#include "SuffixToNFA.h"
#include "NormalizeRE.h"
#include <cassert>

/*
int main(int argc, char** args) {
	string filename = "";
	string outpath = "";
	if (argc == 1) {
		cout << "please input the path of the source file" << endl;
		filename = "in.txt";
		outpath = "lex.yy.c";
		//exit(1);
	}
	else if (argc == 2) {
		for (int i = 0; args[1][i]; i++) filename += args[1][i];
		outpath = "lex.yy.c";
	}
	else if (argc == 3) {
		for (int i = 0; args[1][i]; i++) filename += args[1][i];
		for (int i = 0; args[2][i]; i++) outpath += args[2][i];
	}
	else {
		cout << "error command" << endl;
		exit(1);
	}
	map<string, string>mp;
	vector<Rules>vRules;
	vector<string>Declarations;
	vector<string>functions;
	ReadLex(filename, mp, Declarations, vRules, functions);
	RENormalization(vRules, mp);
	NfaGraph N = CombineNFA(vRules);
	DfaGraph res = NfaToDfa::transfer(N);
	DfaGraph ans = MinimizeDfa::Minimize(res);
	Output outp;
	outp.output(ans, vRules, functions, Declarations, outpath);
	for (int i = 0; i < ans.graph.size(); i++) {
		if (ans.graph[i].isEnd != -1) cout << i << ' ' << ans.graph[i].isEnd << ' ' << vRules[ans.graph[i].isEnd].actions[0] << '\n';
	}

	cout << ans.graph.size() << '\n';
	return 0;
}*/
