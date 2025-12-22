// problem name: Anton and Letters
// problem link: https://codeforces.com/contest/443/problem/A
#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	getline(cin, s);
	set<char> sofChars;
	for (auto x : s) {
		if (isalpha(x)) sofChars.insert(x);
	}
	printf("%d\n", sofChars.size());
}
