// Problem name: Weird Algorithm
// Problem link: https://cses.fi/problemset/task/1068
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
	while (n != 1) {
		cout << n << " ";
		if (n & 1)
			n = 3 * n + 1;
		else
			n /= 2;
	}
	cout << n << '\n';
}

int main() { solve(); }
