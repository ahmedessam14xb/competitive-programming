// problem name: Decoding
// problem link: https://codeforces.com/contest/746/problem/B
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

ll totalSum(ll n) { return 2 + (n * (n - 1)) / 2 - 1; }

void solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  string output = "";
  ring(0, n) {
    if (i & 1)
      output.push_back(s[i]);
    else
      output = s[i] + output;
  }
  if (n & 1)
    reverse(all(output));
  cout << output << '\n';
}

int main() { solve(); }
