// problem name: New Year String
// problem link: https://codeforces.com/contest/2182/problem/A
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
		ll x;
		cin >> x;
		string s;
		cin >> s;
		bool found = false;
		ring(0, x) {
			string tmp = s.substr(i, 4);
			if (tmp == "2026") {
				cout << 0 << '\n';
				found = true;
				break;
			}
		}
		if (!found) {
			int cnt = 0;
			ring(0, x) {
				string tmp = s.substr(i, 4);
				if (tmp == "2025") {
					cout << 1 << '\n';
					cnt++;
					break;
				}
			}
			if (!cnt) cout << 0 << '\n';
		}
	}
}
