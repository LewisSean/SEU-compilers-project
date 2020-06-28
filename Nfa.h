#pragma once
#include<iostream>
#include<unordered_map>
#include <map>
#include<set>
#include<vector>

using namespace std;

//  
const char epsilon = '#';

class Nfa{
public:
	unordered_multimap<char, int> mp;
	int isEnd;
	int number;
	Nfa() {
		isEnd = -1;
	}
	void addedge(int c, int go);
};

