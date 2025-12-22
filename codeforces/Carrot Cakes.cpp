// problem name: Carrot Cakes
// problem link: https://codeforces.com/contest/799/problem/A
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, t, k, d;
	cin >> n >> t >> k >> d;
	int old_oven_time = ((n + k - 1) / k) * t;
	int clock = 0;
	bool new_oven_ava = false;
	while (n > 0) {
		clock++;
		if (clock % t == 0) n -= k;
		if (new_oven_ava and (clock - d) % t == 0) n -= k;
		if (clock == d) new_oven_ava = true;
	}
	if (clock < old_oven_time)
		cout << "YES\n";
	else
		cout << "NO\n";
}
