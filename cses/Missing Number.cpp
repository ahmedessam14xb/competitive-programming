// Problem name: Missing Number
// Problem link: https://cses.fi/problemset/task/1083
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
	ll n;
	cin >> n;
	ll sum = 0;
	ring(0, n - 1) {
		int x;
		cin >> x;
		sum += x;
	}
	cout << (n * (n + 1) / 2) - sum << '\n';
}

int main() { solve(); }
