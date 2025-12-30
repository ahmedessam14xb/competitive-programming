// problem name: Yes or Yes
// problem link: https://codeforces.com/contest/2178/problem/A
#include <bits/stdc++.h>
using namespace std;

int nxti() {
	int x;
	cin >> x;
	return x;
}
string nxts() {
	string x;
	cin >> x;
	return x;
}
#define intmaxx INTMAX_MAX
#define intminn INTMAX_MIN
#define ll long long
#define ull unsigned long long
#define uint unsigned int
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define vci vector<int>
#define vcll vector<long long>
#define vcstr vector<string>
#define ring(a, b) for (int i = a; i < b; i++)

int main() {
	ll t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		ll twoes = 0;
		for (char c : s) {
			if (c == 'Y') twoes++;
		}
		if (twoes >= 2) {
			cout << "NO\n";
		} else
			cout << "YES\n";
	}
}
