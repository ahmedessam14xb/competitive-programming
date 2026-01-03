// Problem name: Repetions
// Problem link: https://cses.fi/problemset/task/1069
#include <bits/stdc++.h>
using namespace std;

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
#define sz(n) (n).size()
#define ln puts("");

void solve() {
	string s;
	cin >> s;
	int cnt = 1;
	int ans = 1;
	ring(0, sz(s) - 1) {
		if (s[i] == s[i + 1])
			cnt++;
		else
			cnt = 1;
		ans = max(cnt, ans);
	}
	printf("%d\n", ans);
}

int main() { solve(); }
