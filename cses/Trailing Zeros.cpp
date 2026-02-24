// problem name: Trailing Zeros
// problem link: https://cses.fi/problemset/task/1618/
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
  ll n;
  cin >> n;
  int domi = 5;
  ll ans = 0;
  while (n/domi >= 1) {
    ans += (n / domi);
    domi *= 5;
  }
  printf("%lld\n", ans);
}

int main() { solve(); }