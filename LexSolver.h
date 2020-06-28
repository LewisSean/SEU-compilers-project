#pragma once
#include "NfaToDfa.h"
#include "MinimizeDfa.h"
#include "Output.h"
#include "SuffixToNFA.h"
#include "NormalizeRE.h"
#include <cassert>

int LexSolver(string filename,string outpath) {
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
}

