#pragma once
#include<map>
#include<vector>
#include<string>
#include<set>
#include<iostream>
#include"Grammar.h"
#include <algorithm>
#include<fstream>
using namespace std;

// A->B.CD, First()
class Item {
public:
	pair<string, vector<string>> production;
	int pos; 
	int end;
	set<string> predict_set;

	Item(pair<string, vector<string>> exp) { production = exp;pos = 0;end = production.second.size(); }
	Item(const Item& it) { production = it.production;pos = it.pos;end = it.end;predict_set = it.predict_set; }
	bool productionEqual(const Item& it)const;
	bool operator == (const Item& it) const;
	bool operator != (const Item& it) const;
	//±ÿ–Î÷ÿ‘ÿ < ‘ÀÀ„∑˚
	bool operator <(const Item& it) const {
		if (production.first < it.production.first)return true;
		else if (production.first > it.production.first)return false;
		else {
			if (production.second.empty() && !it.production.second.empty())return true;
			if (it.production.second.empty())return false;
			for (int i = 0; i < min(production.second.size(), it.production.second.size()); i++) {
				if (production.second[i] < it.production.second[i])return true;
				else if(production.second[i] > it.production.second[i])return false;
			}
			if (production.second.size() < it.production.second.size())return true;
			else if (production.second.size() > it.production.second.size())return false;
			else if (pos < it.pos)return true;
			else return false;
		}
	}
	void printItem() const{
		int tmp = pos;
		cout << production.first << " -> ";
		for (auto& i : production.second) { if (tmp-- == 0)cout << ". ";cout << i << " "; }
		if (tmp == 0)cout << ". ";
		cout << ", ";
		for (auto& i : predict_set)cout << i << " ";
		cout << endl;

	}
};

class LR1State {
public:
	int id;
	//bool completed;
	set<Item> items;
	map<string, int> edges;

	LR1State(Item& item, int ID) { items.emplace(item);id = ID; }
	LR1State(int ID) { id = ID; }
	LR1State() {}
	LR1State(const LR1State& tmp) {
		id = tmp.id;
		items = tmp.items;
		edges = tmp.edges;
	}
	void closure(map<string, vector<vector<string>>>& grammar, 
		map<string, set<string>>& myFirst, set<string>& VT, set<string>& VN);

	set<string> getStrFirst(vector<string>& str, map<string, set<string>>& myFirst, set<string>& VT, set<string>& VN);

	bool isEqual(const LR1State& target);
	bool itemsEqual(const LR1State& target);

	vector<string> getNextSymbol() {
		vector<string> nextSymbol;
		for (auto& i : items) {
			if (i.pos != i.end && i.production.second[i.pos] != "")nextSymbol.emplace_back(i.production.second[i.pos]);
		}
		return nextSymbol;
	}
	void addEdge(string symbol, int id) { edges.emplace(make_pair(symbol, id)); }
	void printState() {
		cout << "---------" << id << "----------" << endl;
		for (auto& i : items) {
			i.printItem();
		}
		for (auto& i : edges)cout << "GOTO " << i.second << " by " << i.first << endl;
	}
	void printState2file(ofstream& ofs) {
		ofs << "---------" << id << "----------" << endl;
		for (auto& i : items) {
			int tmp = i.pos;
			ofs << i.production.first << " -> ";
			for (auto& j : i.production.second) { if (tmp-- == 0)ofs << ". ";ofs << j << " "; }
			if (tmp == 0)ofs << ". ";
			ofs << ", ";
			for (auto& j : i.predict_set)ofs << j << " ";
			ofs << endl;
		}
		for (auto& i : edges)ofs << "GOTO " << i.second << " by " << i.first << endl;
	}
};

class LR1 {
public:
	map<int, LR1State> LR1States;
	int totalStates;
	map<string, vector<vector<string>>> grammar;
	map<string, set<string>> myFirst; 
	map<string, pair<int, int>> VT;
	set<string> VT_names;
	set<string> VN;
	string startVN;
	vector<map<string, int>> parsing_table;
	vector<vector<string>> grammar_names;
	
	LR1() {}
	LR1(const LR1& tmp) {
		LR1States = tmp.LR1States;
		totalStates = tmp.totalStates;
		grammar = tmp.grammar;
		myFirst = tmp.myFirst;
		VT = tmp.VT;
		VT_names = tmp.VT_names;
		VN = tmp.VN;
		startVN = tmp.startVN;
		parsing_table = tmp.parsing_table;
		grammar_names = tmp.grammar_names;
	}

	
	LR1(map<string, vector<vector<string>>>& grammar,
		map<string, set<string>>& myFirst, map<string, pair<int, int>>& VT, set<string>& VN, string& startVN) {
		this->grammar = grammar;
		this->myFirst = myFirst;
		this->VT = VT;
		this->VN = VN;
		this->startVN = startVN;

		this->VN.emplace("S");
		this->VT.emplace(make_pair("$", make_pair(-1,-1)));
		this->grammar.emplace(make_pair("S", vector<vector<string>>(1, vector<string>(1,startVN)) ));
		Item initItem(make_pair("S", vector<string>(1, startVN)));
		initItem.predict_set.emplace("$");
		LR1State initState(initItem, 0);
		for (auto& i : this->VT)VT_names.emplace(i.first);
		initState.closure(this->grammar, this->myFirst, VT_names, this->VN);
		LR1States.emplace(make_pair(0, initState));
		//initState.printState();
		totalStates = 1;

		for (auto& g : this->grammar) {
			for (auto& alter : g.second) {
				vector<string> tmp(1, g.first);
				tmp.insert(tmp.end(), alter.begin(), alter.end());
				grammar_names.emplace_back(move(tmp));
			}
		}
	}
	LR1State GOTO(LR1State& I,const string& X, int id);
	LR1State GOTO_Epsilon(LR1State& I, const string& X, int id);
	void generateDFA();
	void generateDFA_BFS();
	bool SRconflict(const string& predict, const vector<string>& ruler);
	void printStates() {
		for (auto& s : LR1States)
			s.second.printState();
	}
	void printStates2file() {
		ofstream ofs("LR1_States.out");
		for (auto& s : LR1States)
			s.second.printState2file(ofs);
		ofs.close();
	}
	int contain(LR1State& I) {
		for (auto& i : LR1States)
			if (i.second.isEqual(I))return i.first;
		return -1;
	}
	void generateParsingTable();
	void printParsingTable();
	void printParsingTable2file();
};