// problem name: Impost or Sus
// problem link: https://codeforces.com/contest/2178/problem/B
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
		ll ans = 0;
		if (s[0] == 'u') {
			ans++;
			s[0] = 's';
		}
		if (s[s.size() - 1] == 'u') {
			ans++;
			s[s.size() - 1] = 's';
		}
		for (int i = 1; i < s.size() - 1; i++) {
			if (s[i] == 's')
				continue;
			else {
				if (s[i + 1] == 'u') {
					ans++;
					s[i + 1] = 's';
				}
			}
		}
		cout << ans << '\n';
	}
}
