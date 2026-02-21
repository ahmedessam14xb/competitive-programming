// problem name: Lovely Palindromes
// problem link: https://codeforces.com/contest/688/problem/B
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
  string s;
  cin >> s;
  if (sz(s) == 1)
    cout << s + s << '\n';
  else {
    if (sz(s) & 1) {
      cout << s;
      for (int i = sz(s) - 1; i >= 0; i--)
        cout << s[i];
      ln
    } else {
      cout << s;
      for (int i = sz(s) - 1; i >= 0; i--) {
        cout << s[i];
      }
      ln
    }
  }
}

int main() { solve(); }