// problem name: Helpful Maths
// problem link: https://codeforces.com/contest/339/problem/A
#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;
	int ones = 0, twos = 0, threes = 0, sums = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '1')
			ones++;
		else if (s[i] == '2')
			twos++;
		else if (s[i] == '3')
			threes++;
		else
			sums++;
	}
	while (ones > 1) {
		cout << "1+";
		ones--;
	}
	if (ones and (twos or threes))
		cout << "1+";
	else if (ones)
		cout << "1";
	while (twos > 1) {
		cout << "2+";
		twos--;
	}
	if (twos and threes)
		cout << "2+";
	else if (twos)
		cout << "2";
	while (threes > 1) {
		cout << "3+";
		threes--;
	}
	if (threes) cout << "3";
	cout << '\n';
}
