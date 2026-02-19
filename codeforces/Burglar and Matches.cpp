// problem name: Burglar and Matches
// problem link: https://codeforces.com/contest/16/problem/B
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
  int n, m;
  cin >> n >> m;
  vector<pair<int, int>> arr;
  ring(0, m) {
    int x, y;
    cin >> x >> y;
    arr.push_back({x, y});
  }
  sort(arr.rbegin(), arr.rend(),
       [](pair<int, int> const &a, pair<int, int> const &b) {
         return a.second < b.second;
       });
  ll ans = 0;
  for (int i = 0; i < m; i++) {
    if (arr[i].first <= n) {
      ans += arr[i].first * arr[i].second;
      n -= arr[i].first;
    } else {
      ans += n * arr[i].second;
      break;
    }
  }
  printf("%lld\n", ans);
}

int main() { solve(); }