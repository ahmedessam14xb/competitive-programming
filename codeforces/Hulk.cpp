// problem name: Hulk
// problem link: https://codeforces.com/problemset/problem/705/A
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
  string s = "I hate", ss = "I love";
  int n;
  cin >> n;
  ring(1, n) {
    if (i & 1)
      cout << s;
    else
      cout << ss;
    cout << " that ";
  }
  if (n & 1)
    cout << "I hate it";
  else
    cout << "I love it";
  ln
}

int main() { solve(); }
