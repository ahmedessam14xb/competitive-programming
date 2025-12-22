// problem name: Free Ice Cream
// problem link: https://codeforces.com/contest/686/problem/A
#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n, x;
	cin >> n >> x;
	int distress = 0;
	while (n--) {
		char c;
		long long tmp;
		cin >> c >> tmp;
		if (c == '+')
			x += tmp;
		else {
			if (x >= tmp)
				x -= tmp;
			else
				distress++;
		}
	}
	printf("%lld %d\n", x, distress);
}
