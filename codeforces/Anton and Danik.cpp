// problem name: Anton and Danik
// problem link: https://codeforces.com/contest/734/problem/A
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	int anton = 0, danik = 0;
	for (auto ch : s) {
		if (ch == 'A')
			anton++;
		else
			danik++;
	}
	if (anton > danik)
		cout << "Anton";
	else if (danik > anton)
		cout << "Danik";
	else
		cout << "Friendship";
	cout << '\n';
}
