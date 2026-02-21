// problem name: Combinations
// problem link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=305
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

void solve() {
  ll n, m;
  while (cin >> n >> m) {
    if (n == 0 and m == 0)
      break;
    int mn = min(m, n - m), mx = max(m, n - m);
    vci num;
    for (int i = mx + 1; i <= n; i++)
      num.push_back(i);
    vci domi;
    for (int i = 1; i <= mn; i++)
      domi.push_back(i);
    for (int i = 0; i < sz(num); i++) {
      for (int j = 0; j < sz(domi); j++) {
        if (num[i] == 1)
          break;
        int gcd = __gcd(num[i], domi[j]);
        if (gcd == 1)
          continue;
        num[i] /= gcd;
        domi[j] /= gcd;
      }
    }
    ll ans = 1;
    for (auto x : num) {
      ans *= x;
    }
    printf("%lld things taken %lld at a time is %lld exactly.\n", n, m, ans);
  }
}

int main() { solve(); }