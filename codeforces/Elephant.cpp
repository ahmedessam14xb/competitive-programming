// problem name: Elephant
// problem link: https://codeforces.com/contest/617/problem/A
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
  ll x;
  cin >> x;
  ll ans = x / 5;
  x %= 5;
  if (x)
    ans++;
  printf("%d\n", ans);
}

int main() { solve(); }
