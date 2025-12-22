// problem name: Word Capitalization
// problem link: https://codeforces.com/contest/281/problem/A
#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;
	s[0] = (char)toupper(s[0]);
	printf("%s\n", s.c_str());
}
