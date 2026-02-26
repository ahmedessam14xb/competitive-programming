// problem name: Triple
// problem link: https://codeforces.com/contest/1669/problem/B
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
  int n;
  cin >> n;
  map<int, int> mp;
  ring(0, n) {
    int x;
    cin >> x;
    mp[x]++;
  }
  int cnt = 0;
  for (auto item : mp) {
    if (item.second >= 3) {
      cnt++;
      cout << item.first << " ";
      break;
    }
  }
  if (cnt == 0)
    cout << -1 << '\n';
  cout << '\n';
}

int main() {
  int t;
  cin >> t;
  while (t--)
    solve();
}
