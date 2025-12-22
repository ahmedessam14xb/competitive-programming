// problem name: Juicer
// problem link: https://codeforces.com/contest/709/problem/A
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, b, d;
	cin >> n >> b >> d;
	int sum = 0, ans = 0;
	while (n--) {
		int x;
		cin >> x;
		if (x > b) continue;
		sum += x;
		if (sum > d) {
			sum = 0;
			ans++;
		}
	}
	printf("%d\n", ans);
}
