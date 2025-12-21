// problem name: Product
// problem link: https://onlinejudge.org/external/101/10106.pdf
#include <bits/stdc++.h>
using namespace std;

vector<int> string_to_array(string s) {
	vector<int> number;
	for (int i = s.size() - 1; i >= 0; i--) number.push_back(s[i] - '0');
	return number;
}

int main() {
	string x, y;
	while (cin >> x) {
		cin >> y;
		vector<int> a = string_to_array(x);
		vector<int> b = string_to_array(y);
		vector<int> ans(600);
		for (int i = 0; i < a.size(); i++) {
			for (int j = 0; j < b.size(); j++) {
				ans[i + j] += a[i] * b[j];
			}
		}
		for (int i = 0; i < 599; i++) {
			ans[i + 1] += ans[i] / 10;
			ans[i] = ans[i] % 10;
		}
		int index = 599;
		while (index > 0 && ans[index] == 0) {
			index--;
		}
		for (; index >= 0; index--) {
			cout << ans[index];
		}
		cout << '\n';
	}
	return 0;
}
