// problem name: Left-handers, Right-handers and Ambidexters
// problem link: https://codeforces.com/contest/950/problem/A
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

void solve() {
  int l, r, a;
  cin >> l >> r >> a;
  int mx = max(l, r), mn = min(l, r);
  int z = min(mx - mn, a);
  mn += z;
  a -= z;
  mn += a / 2;
  cout << mn * 2 << '\n';
}

int main() { solve(); }
