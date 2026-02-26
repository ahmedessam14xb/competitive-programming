// problem name: Division?
// problem link: https://codeforces.com/problemset/problem/1669/A
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
  int x;
  cin >> x;
  if (x <= 1399)
    cout << "Division 4\n";
  else if (x >= 1900)
    cout << "Division 1\n";
  else if (x <= 1599 and x >= 1400)
    cout << "Division 3\n";
  else
    cout << "Division 2\n";
}

int main() {
  int t;
  cin >> t;
  while (t--)
    solve();
}
