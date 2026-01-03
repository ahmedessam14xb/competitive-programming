// Problem name: The Playboy Chimp
// Problem link:
// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1552
#include <bits/stdc++.h>
using namespace std;

int nxti() {
	int x;
	cin >> x;
	return x;
}
string nxts() {
	string x;
	cin >> x;
	return x;
}
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

ll lower(vector<ll> nums, ll num) {
	ll start = 0, end = sz(nums) - 1;
	while (start <= end) {
		ll mid = (end + start) / 2;
		if (nums[mid] <= num)
			start = mid + 1;
		else
			end = mid - 1;
	}
	if (start >= sz(nums)) return -1;
	return start;
}

ll upper(vector<ll> nums, ll num) {
	ll start = 0, end = sz(nums) - 1;
	while (start <= end) {
		ll mid = (end + start) / 2;
		if (nums[mid] >= num)
			end = mid - 1;
		else
			start = mid + 1;
	}
	if (end < 0) return -1;
	return end;
}

void solve() {
	ll n;
	cin >> n;
	vcll nums(n);
	for (auto& x : nums) cin >> x;
	ll q;
	cin >> q;
	vcll query(q);
	for (auto& x : query) cin >> x;
	ring(0, q) {
		ll num = query[i];
		ll upper_pos = upper(nums, num);
		ll lower_pos = lower(nums, num);
		// cout << lower_pos << " " << upper_pos << '\n';
		if (upper_pos == -1)
			cout << "X";
		else
			cout << nums[upper_pos];
		cout << " ";
		if (lower_pos == -1)
			cout << "X";
		else
			cout << nums[lower_pos];
		ln
	}
}

int main() { solve(); }
