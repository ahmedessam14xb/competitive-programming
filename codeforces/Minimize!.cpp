// problem name: Minimize!
// problem link: https://codeforces.com/problemset/problem/2009/A
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
#define ring(i, a, b) for (int i = a; i < b; i++)
#define ring0(i, n) ring(i, 0, n)
#define dring(i, j, a, b) ring0(i, a) ring0(j, b)
#define sz(n) (n).size()
#define ln puts("");

void solve() {
  int a, b; cin >> a >> b;
  int mn = INT_MAX;
  ring(i, a, b+1){
    mn = min(mn, (i - a) + (b - i));
  }
  cout << mn << '\n';
}

int main() {
  int t;
  cin >> t;
  while (t--)
    solve();
}
