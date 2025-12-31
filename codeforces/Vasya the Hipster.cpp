// problem name: Vasya the Hipster
// problem link: https://codeforces.com/contest/581/problem/A
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
  int a, b;
  cin >> a >> b;
  int mn = min(a, b), mx = max(a, b);
  mx -= mn;
  cout << mn << " " << mx / 2 << '\n';
}

int main() { solve(); }
