#include<iostream>
#include<map>
#include<vector>
#include<fstream>
#include <string>
#include <set>
#include "ParseLex.h"
using namespace std;
const set<char> ESCAPEDCHARS{ '.','|','*','(',')','+','?','{','}','[',']' };
const string ALLSET("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!\"#%'()*+,-./:;<=>\?[\\]^{|}_ \n\t\v\f~&");

void HandleBrace(string& s, map<string, string>& mp);

void HandleEscape(string& s, bool in);

void getSet(set<char>& charSet, const string& rec, bool flag);

void HandleBrackets(string& s);

void HandleQuote(string& s); 

void HandleDot(string& s);

void AddDot(string& s);

void RENormalization(vector<Rules>& re, map<string, string>& mp);
