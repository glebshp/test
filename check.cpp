#include "testlib.h"
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>
#include <cassert>
#include <ctime>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define pb push_back
#define mp make_pair
#define fs first
#define sc second

int main(int argc, char ** argv) {
	registerTestlibCmd(argc, argv);

	string jury = ans.readWord();
	string cont = ouf.readWord();

	if (jury != cont) {
		cout << 0 << endl;
		quitf(_wa, "Answers differ");
	}

	cout << 5 << endl;
	quitf(_ok, "Correct");

    return 0;
}