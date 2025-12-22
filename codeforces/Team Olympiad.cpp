// problem name: Team Olympiad
// problem link: https://codeforces.com/contest/490/problem/A
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int ones = 0, twoes = 0, threes = 0;
	vector<int> ones_index, twoes_index, threes_index;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		if (x == 1)
			ones_index.push_back(i + 1);
		else if (x == 2)
			twoes_index.push_back(i + 1);
		else
			threes_index.push_back(i + 1);
	}
	int mn = min(ones_index.size(),
		     min(twoes_index.size(), threes_index.size()));
	printf("%d\n", mn);
	for (int i = 0; i < mn; i++) {
		cout << ones_index[i] << " " << twoes_index[i] << " "
		     << threes_index[i] << '\n';
	}
}
