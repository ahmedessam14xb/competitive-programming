// problem name: Blank Space
// problem link: https://codeforces.com/problemset/problem/1829/B
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
  int n;
  cin >> n;
  int zeros = 0;
  int mx = 0;
  while (n--) {
    int x;
    cin >> x;
    if (x == 0)
      zeros++;
    else {
      mx = max(mx, zeros);
      zeros = 0;
    }
  }
  mx = max(mx, zeros);
  cout << mx << "\n";
}

int main() {
  int t;
  cin >> t;
  while (t--)
    solve();
}
