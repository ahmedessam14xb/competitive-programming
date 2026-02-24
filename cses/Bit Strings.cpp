// problem name: Bit Strings
// problem link: https://cses.fi/problemset/task/1617/
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
 
ll mod = 1e9 + 7;
ll count(ll n) {
  if (n == 0)
    return 1;
  n %= mod;
  return (count(n / 2) % mod + count((n + 1) / 2) % mod) % mod;
}
 
void solve() {
  ll n;
  cin >> n;
  ll ans = 1;
  while (n > 0) {
    ans = ((2 * ans % mod) % mod);
    n--;
  }
  cout << ans << '\n';
}
 
int main() { solve(); }