// problem name: Sum of Digits
// problem link: https://codeforces.com/contest/102/problem/B
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
#define sz(n) (n).size()
#define ln puts("");

void solve() {
  string s;
  cin >> s;
  ll sum = 0;
  int cnt = 0;
  // cout << sz(s) << '\n';
  while (sz(s) > 1) {
    sum = 0;
    ring(0, sz(s)) sum += (s[i] - '0');
    s = to_string(sum);
    cnt++;
  }
  cout << cnt;
  ln;
}

int main() { solve(); }
