// Problem name: easymath
// Problem link: https://www.spoj.com/problems/EASYMATH/
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
#define unmapii unordered_map<int, int>
#define unmapsi unordered_map<string, int>
#define vcstr vector<string>
#define ring(a, b) for (int i = a; i < b; i++)
#define sz(n) (n).size()
#define ln puts("");

ll arr[4];

ll Lcm(ll a, ll b) { return (a * b) / __gcd(a, b); }

ll solution(int index, int cnt, ll num, ll domi) {
	if (index == 5) {
		if (cnt % 2 == 0)
			return -num / domi;
		else
			return num / domi;
	}
	ll res = 0;
	res += solution(index + 1, cnt + 1, num, Lcm(arr[index], domi));
	res += solution(index + 1, cnt, num, domi);
	return res;
}

void solve() {
	ll n, m, a, d;
	cin >> n >> m >> a >> d;
	arr[0] = a;
	arr[1] = a + d;
	arr[2] = a + 2 * d;
	arr[3] = a + 3 * d;
	arr[4] = a + 4 * d;

	cout << -1 * (solution(0, 0, m, 1) - solution(0, 0, n - 1, 1)) << '\n';
}

int main() {
	int t;
	cin >> t;
	while (t--) solve();
}
