// Problem name: AGGRCOW - Aggressive cows
// Problem link: https://www.spoj.com/problems/AGGRCOW/
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
#define sz(n) (n).size()
#define ln puts("");

bool verify_distance(vci stalls, int distance, int cows) {
	int cnt = 1;
	int start = stalls[0];
	for (int i = 1; i < sz(stalls); i++) {
		if (start + distance <= stalls[i]) {
			start = stalls[i];
			cnt++;
		}
	}
	return cows <= cnt;
}

void solve() {
	ll n, c;
	cin >> n >> c;
	vci stalls(n);
	for (auto& x : stalls) cin >> x;
	sort(all(stalls));
	int start = stalls[0], end = stalls[n - 1];
	while (start < end) {
		int mid = start + ((end - start + 1) / 2);
		if (verify_distance(stalls, mid, c)) {
			start = mid;
		} else
			end = mid - 1;
	}
	cout << start << '\n';
}

int main() {
	int t;
	cin >> t;
	while (t--) solve();
}
