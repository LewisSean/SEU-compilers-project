#pragma once
#include "DfaGraph.h"
#include "NfaGraph.h"
#include <unordered_map>

using namespace std;

class NfaToDfa{
public:
	static DfaGraph transfer(NfaGraph base);

};

