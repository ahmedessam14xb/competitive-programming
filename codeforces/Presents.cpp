// problem name: Presents
// problem link: https://codeforces.com/contest/136/problem/A
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int& x : arr) cin >> x;
	int ans_arr[n];
	for (int i = 0; i < n; i++) {
		ans_arr[arr[i] - 1] = i + 1;
	}
	for (auto x : ans_arr) cout << x << " ";
	printf("\n");
}
