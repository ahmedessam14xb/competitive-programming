// problem name: Blackslex and Showering
// problem link: https://codeforces.com/contest/2179/problem/B
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
	int t = nxti();
	while (t--) {
		int n = nxti();
		ll sum = 0;
		ll arr[n];
		ring(0, n) { cin >> arr[i]; }
		ring(1, n) { sum += abs(arr[i] - arr[i - 1]); }
		ll mx_diff = -1;
		int mx_index = -1;
		ring(0, n) {
			ll diff;
			if (i == 0) {
				diff = abs(arr[0] - arr[1]);
			} else if (i == n - 1) {
				diff = abs(arr[n - 1] - arr[n - 2]);
			} else {
				diff = abs(arr[i] - arr[i - 1]) +
				       abs(arr[i] - arr[i + 1]) -
				       abs(arr[i + 1] - arr[i - 1]);
			}
			if (diff > mx_diff) {
				mx_diff = diff;
				mx_index = i;
			}
		}
		cout << sum - mx_diff << '\n';
	}
}
