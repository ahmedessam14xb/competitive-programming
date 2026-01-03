// Problem name: Permutations
// Problem link: https://cses.fi/problemset/task/1070
#include <bits/stdc++.h>
using namespace std;

#define intmaxx INTMAX_MAX
#define intminn INTMAX_MIN
#define ll long long
#define ull unsigned long long
#define uint unsigned int
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define vci vector<int>
#define vcll vector<long long>
#define vcstr vector<string>
#define ring(a, b) for (int i = a; i < b; i++)
#define sz(n) (n).size()
#define ln puts("");

void solve() {
	int n;
	cin >> n;
	if (n <= 3 and n != 1)
		cout << "NO SOLUTION\n";
	else {
		int even = 2;
		while (even <= n) {
			cout << even << " ";
			even += 2;
		}
		int odd = 1;
		while (odd <= n) {
			cout << odd << " ";
			odd += 2;
		}
		ln
	}
}

int main() { solve(); }
