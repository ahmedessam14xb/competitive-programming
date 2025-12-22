// problem name: String Task
// problem link: https://codeforces.com/contest/118/problem/A
#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;
	set<char> sofvowels = {'a', 'o', 'e', 'u', 'i', 'u', 'y'};
	for (char c : s) {
		c = (char)tolower(c);
		if (sofvowels.count(c) == 0) cout << "." << c;
	}
}
