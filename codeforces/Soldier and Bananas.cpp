// problem name: Soldier and Bananas
// problem link: https://codeforces.com/contest/546/problem/A
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
#define sz(n) n.size()

void solve() {
  int k, n, w;
  cin >> k >> n >> w;
  int ans = k * (w * (w + 1) / 2) - n;
  if (ans > 0)
    cout << ans << '\n';
  else
    cout << 0 << '\n';
}

int main() { solve(); }
