// problem name: Next Round
// problem link: https://codeforces.com/contest/158/problem/A
#include <bits/stdc++.h>
using namespace std;

int main() {
	int k, n;
	cin >> k >> n;
	int arr[k];
	for (auto& x : arr) cin >> x;
	n = arr[n - 1];
	int cnt = 0;
	for (auto x : arr) {
		if (x >= n and x > 0) cnt++;
	}
	printf("%d\n", cnt);
}
