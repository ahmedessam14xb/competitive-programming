// problem name: Big Mod
// problem link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=310
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

ll mod(ll a, ll b, ll c) {
  if (b == 0)
    return 1;

  if (!(b & 1)) {
    ll ans = mod(a, b / 2, c);
    return (ans * ans) % c;
  } else
    return (a % c * mod(a, b - 1, c)) % c;
}

void solve() {
  ll b, p, m;
  while (cin >> b >> p >> m) {
    ll ans = mod(b, p, m);
    printf("%lld\n", ans);
  }
}

int main() { solve(); }