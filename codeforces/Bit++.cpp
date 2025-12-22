// problem name: Bit++
// problem link: https://codeforces.com/contest/282/problem/A
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int cnt = 0;
	while (n--) {
		string s;
		cin >> s;
		if (s[1] == '+')
			cnt++;
		else
			cnt--;
	}
	printf("%d\n", cnt);
}
