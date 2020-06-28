#include "Dfa.h"

void Dfa::addedge(int c, int go) {
	mp.emplace(c, go);
}