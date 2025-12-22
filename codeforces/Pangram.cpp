// problem name: Pangram
// problem link: https://codeforces.com/contest/520/problem/A
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	set<char> characters;
	for (char c : s) {
		characters.insert((char)tolower(c));
	}
	if (characters.size() == 26)
		cout << "YES\n";
	else
		cout << "NO\n";
}
