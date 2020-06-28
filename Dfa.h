#pragma once
#include <unordered_map>
using namespace std;

class Dfa{
public:
	unordered_map<int, int> mp;
	int isEnd;
	Dfa() {
		isEnd = -1;
	}
	void addedge(int c, int go);

};

