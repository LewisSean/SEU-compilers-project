#include<iostream>
#include<algorithm>
#include<map>
#include<vector>
#include<fstream>
#include"Grammar.h"
using namespace std;

Grammar::Grammar(string filename) {
    ifstream fin(filename);
    std::istream& input = fin;
    string s;
    int prior = 0;  //运算符优先级
    bool state = false;   // 进入%{状态
    startVN = "";
    while (!input.eof()) {
        getline(input, s);
        s = trim(s);

        if (s == "" )continue;
        if (state == true && s != "%}")continue;
        if (s == "%}") { 
            state = false; 
            //cout << "end %}" << endl;
        }
        else if (s == "%%") {
            //cout << "start to get G:" << endl;
            if(getGrammar(input))cout << "yacc文件的MiniC语句正确读入。" << endl;
            else cout << "错误：yacc文件的MiniC语句未正确读入！" << endl;
        }
        else if (s == "%{") {
            //cout << "start %{" << endl;
            state = true;
        }
        else if (!s.compare(0, 6, "%token")) {
            //cout << "start %token" << endl;
            s = trim(s.substr(6));
            vector<string> tokens;
            split(s,tokens);
            for (auto& i : tokens)VT_name.emplace(i);
        }
        else if (!s.compare(0, 5, "%left")) {
            //cout << "start %left" << endl;
            s = trim(s.substr(5));
            vector<string> tokens;
            split(s, tokens);
            for (auto& i : tokens)VT.emplace(make_pair(i,make_pair(prior, 0)));
            prior++;
        }
        else if (!s.compare(0, 6, "%right")) {
            //cout << "start %right" << endl;
            s = trim(s.substr(6));
            vector<string> tokens;
            split(s, tokens);
            for (auto& i : tokens)VT.emplace(make_pair(i, make_pair(prior, 1)));
            prior++;
        }
        else if (!s.compare(0, 6, "%start")) {
            //cout << "start %start" << endl;
            s = trim(s.substr(6));
            startVN = s;
        }
    }
    for (auto& i : VT_name) {
        VT.emplace(make_pair(i, make_pair(-1, -1)));    //对于没有结合律、优先级的VT都赋值-1，-1
    }
    cout << "yacc文件读入成功！" << endl;
}
//识别产生式中形如'vt'的终结符
void Grammar::filterVT(vector<string>& production) {
    for (auto& i : production) {
        if (i.length() >= 2 && i[0] == '\'' && i[i.length() - 1] == '\'') {
            i = i.substr(1, i.length() - 2);
            VT_name.emplace(i);
        }
    }
}
bool Grammar::getGrammar(istream& input) {
    int state = 0;
    int num = 0;

    bool haveStart = true;
    string str;
    vector<string> tokens;
    string left_VN;
    if (startVN == "")haveStart = false;
    while (!input.eof()) {
        getline(input, str);
        str = trim(str);
        if (str == "")continue;
        
        split(str, tokens);
        filterVT(tokens);
        switch (state) {
        case 0:
            if (str == "%%")state = 4;
            else if (tokens[1] == ":" && find(tokens.begin(), tokens.end(), "{") == tokens.end()) {
                if (!haveStart) { startVN = tokens[0];haveStart = true; }  //S'有没有定义
                VN.emplace(tokens[0]);
                left_VN = tokens[0];
                state = 1;
                vector<vector<string>> rights;
                vector<string>tmp(tokens.begin() + 2, tokens.end());
                if (tmp.empty())tmp.emplace_back("");
                rights.emplace_back(move(tmp));
                grammar.insert(make_pair(tokens[0], move(rights)));
            }
            else if (tokens[1] == ":" && tokens.back() == "{") {
                if (!haveStart) { startVN = tokens[0];haveStart = true; }
                VN.emplace(tokens[0]);
                left_VN = tokens[0];
                state = 2;
                vector<vector<string>> rights;
                vector<string>tmp(tokens.begin() + 2, tokens.end() - 1);
                if (tmp.empty())tmp.emplace_back("");
                rights.emplace_back(move(tmp));
                grammar.insert(make_pair(tokens[0], move(rights)));
            }
            else if (tokens[1] == ":" && find(tokens.begin(),tokens.end(), "{") != tokens.end()) {
                if (!haveStart) { startVN = tokens[0];haveStart = true; }
                VN.emplace(tokens[0]);
                left_VN = tokens[0];
                vector<vector<string>> rights;
                int index = find(tokens.begin(), tokens.end(), "{") - tokens.begin(); //{注释内容起始位置
                //cout <<"index: " <<index << endl;
                vector<string>tmp(tokens.begin() + 2, tokens.begin()+index);
                if (tmp.empty())tmp.emplace_back("");
                rights.emplace_back(move(tmp));
                grammar.insert(make_pair(tokens[0], move(rights)));

                //to do

                if (tokens.back() == "}")state = 1;
                else state = 2;
            }
            
            else state = -1;
            break;

        case 1:
            if (tokens[0] == "|" && find(tokens.begin(), tokens.end(), "{") == tokens.end()) {
                state = 1;
                //if (tokens.size() == 1)grammar[left_VN].emplace_back(vector<string>(1, ""));
                //else {
                vector<string> tmp(tokens.begin() + 1, tokens.end());
                grammar[left_VN].emplace_back(move(tmp));
                //}
            }
            else if (tokens[0] == "|" && tokens.back() == "{") {
                state = 2;
                vector<string> tmp(tokens.begin() + 1, tokens.end() - 1);
                //if (tmp.empty())tmp.emplace_back("");
                grammar[left_VN].emplace_back(move(tmp));
            }
            else if (tokens[0] == "|" && find(tokens.begin(), tokens.end(), "{") != tokens.end()) {
                int index = find(tokens.begin(), tokens.end(), "{") - tokens.begin(); //{注释内容起始位置
                vector<string> tmp(tokens.begin() + 1, tokens.begin() + index);
                //if (tmp.empty())tmp.emplace_back("");
                grammar[left_VN].emplace_back(move(tmp));

                // to do

                if (tokens.back() == "}")state = 1;
                else state = 2;
            }
            else if (tokens[0] == ";") {
                num++;
                //cout << "production " << num << " ok!" << endl;
                state = 0;
            }
            else {
                state = -1;
                cout << "production " << num << " read fail!" << endl;
            }
            break;
        case 2:
            if (tokens[0] == "}")state = 1;
            else {
                //to do
                if (tokens.back() == "}")state = 1;
            }
            break;
        }
    }


    if (state == 4) {
        return true;
    }
    else return false;
}

//求First集合
/*	map<string, vector<vector<string>>> grammar;
	set<string> VT;
    set<string> VN;
    map<string, MyOperator> Ops;*/
void Grammar::getFirst() {
    for (auto& i : VT_name) { 
        string list[] = { i };
        myFirst.emplace(make_pair(i, move(set<string>(list,list+1)))); 
    }
    getVNFirst();
    //printFirst();
}

//进行了一次优化
void Grammar::getVNFirst() {
    map<string, set<string>> relation_vns;  //各vn的first集合之间的子集关系
    for (auto& vn : VN) relation_vns.emplace(make_pair(vn, set<string>()));
    map<string, vector<vector<string>>> tmp_g(grammar);
    //初始化
    for (auto& vn : VN) {
        set<string> tmp;
        myFirst.emplace(make_pair(vn, move(tmp)));
        for (auto& production : tmp_g[vn]) {
            if (production.empty() || production[0] == "")myFirst[vn].emplace(myEpsilon);
            else if (VT_name.count(production[0]) || VT.count(production[0]))myFirst[vn].emplace(production[0]);
            else if (VN.count(production[0])) relation_vns[vn].emplace(production[0]); //加入子集
        }
    }

    bool unchanged = true;
    int num = 0;
    while (1) {
        unchanged = true;
        vector<string> vn_changed;
        for (auto& vn : VN) {
            if (find(tmp_g[vn].begin(), tmp_g[vn].end(), vector<string>()) != tmp_g[vn].end()) {
                tmp_g[vn].erase(find(tmp_g[vn].begin(), tmp_g[vn].end(), vector<string>()));
                myFirst[vn].emplace(myEpsilon);
                unchanged = false;
            }

            for (auto& production : tmp_g[vn]) {
                //vn可以推导为epslion
                /*
                if (production.size() == 0) {
                    myFirst[vn].emplace(epsilon);
                    unchanged = false;
                    cout << vn << " + " << epsilon << endl;
                }*/
                //如果vn的产生式首个非终结符中有epslion
                if (myFirst[production[0]].count(myEpsilon)) {
                    production.erase(production.begin());
                    if (!production.empty()) {
                        if (VT_name.count(production[0]) || VT.count(production[0])) {
                            myFirst[vn].emplace(production[0]);
                            vn_changed.emplace_back(vn);
                        }
                        else if (VN.count(production[0]))relation_vns[vn].emplace(production[0]);
                    }
                    unchanged = false;
                }
            }
        }
        /*
        if (myFirst[sub_vn].count(epsilon)) {
            for (auto& production : grammar[vn]) {  //vector<string>
                vector<string>::iterator it;
                for (it = production.begin(); it != production.end(); it++) {
                    if (myFirst[*it].count(epsilon) == 0) {
                        relation_vns[vn].emplace(*it); //加入新的非终结符子集
                    }
                }
                if (it == production.end())myFirst[vn].emplace(epsilon);
            }
            unchanged = false;
        }*/
        if (unchanged)break;

        for (auto& vn : VN) {
            /*
            for (auto& sub_vn : relation_vns[vn]) {
                for (auto& item : myFirst[sub_vn]) {
                    if (myFirst[vn].count(item) == 0) {
                        myFirst[vn].emplace(item);
                        unchanged = false;
                    }
                }
            }*/
            for (auto& vn_c : vn_changed) {
                if (relation_vns[vn].count(vn_c)) {
                    for (auto& item : myFirst[vn_c]) {
                        if (!myFirst[vn].count(item)) {
                            myFirst[vn].emplace(item);
                            unchanged = false;
                        }
                    }
                }
            }
        }

        if (unchanged)break;
    }
    /*
    for (auto& s: myFirst) {
        if(s.second.find("") != s.second.end())s.second.erase(s.second.find(""));
    }*/

}

void Grammar::printFirst() {
    for (auto& i : VN) {
        cout << i << ": " << myFirst[i].size() <<"  ";
        for (auto& i : myFirst[i])cout << i << " ";
        cout << endl;
    }
}