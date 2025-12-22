// problem name: Translation
// problem link: https://codeforces.com/contest/41/problem/A
#include <bits/stdc++.h>
using namespace std;

int main() {
	string s, ss;
	cin >> s >> ss;
	if (s.size() != ss.size())
		printf("NO\n");
	else {
		int index = 0;
		bool same = true;
		while (index < s.size()) {
			if (s[index] != ss[s.size() - 1 - index]) {
				same = false;
				break;
			}
			index++;
		}
		if (same)
			printf("YES\n");
		else
			printf("NO\n");
	}
}
