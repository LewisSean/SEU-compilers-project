#include "Nfa.h"
using namespace std;

void Nfa::addedge(int c, int go) {
	mp.emplace(c, go);
}
