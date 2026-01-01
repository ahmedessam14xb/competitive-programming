// problem name: Nearly Lucky Number
// problem link: https://codeforces.com/contest/110/problem/A
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
  int cnt = 0;
  ring(0, sz(s)) {
    if (s[i] == '4' or s[i] == '7')
      cnt++;
  }
  if (cnt == 4 or cnt == 7)
    cout << "YES\n";
  else
    cout << "NO\n";
}

int main() { solve(); }
