// Problem name: Uniform Generator
// Problem link:
// https://onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=349
#include <bits/stdc++.h>
using namespace std;

#define intmaxx INTMAX_MAX
#define intminn INTMAX_MIN
#define ll long long
#define ull unsigned long long
#define uint unsigned int
#define pb push_back
#define vc vector<int>
#define vci vector<int>
#define vcll vector<long long>
#define vcstr vector<string>
#define ring(a, b) for (int i = a; i < b; i++)

int main() {
	int step, mod;
	while (cin >> step) {
		cin >> mod;
		set<int> seeds;
		seeds.insert(0);
		int prev_seed = 0, cur_seed;
		while (true) {
			cur_seed = ((prev_seed % mod) + (step % mod)) % mod;
			if (seeds.count(cur_seed)) break;
			seeds.insert(cur_seed);
			prev_seed = cur_seed;
		}
		string ans = "Bad Choice";
		if (seeds.size() == mod) ans = "Good Choice";

		cout << right << setw(10) << step << setw(10) << mod << "    "
		     << left << ans << '\n';
		cout << '\n';
	}
}
