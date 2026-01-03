// problem name: Burning Midnight Oil
// problem link: https://codeforces.com/contest/165/problem/B
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

ll totalsum(ll number, ll k) {
  ll ans = 0;
  while (number) {
    ans += number;
    number /= k;
  }
  return ans;
}

void solve() {
  ll n, k;
  cin >> n >> k;
  ll start = 1, end = n;
  while (start < end) {
    ll mid = start + (end - start) / 2;
    ll sum = totalsum(mid, k);
    if (sum >= n) {
      end = mid;
    } else
      start = mid + 1;
  }
  cout << end << '\n';
}

int main() { solve(); }
