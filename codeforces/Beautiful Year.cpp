// problem name: Beautiful Year
// problem link: https://codeforces.com/contest/271/problem/A
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

int main() {
  int n;
  cin >> n;
  for (int i = n + 1; i <= 10000; i++) {
    string year = to_string(i);
    set<char> sofchars;
    for (auto x : year) {
      sofchars.insert(x);
    }
    if (sofchars.size() == 4) {
      cout << i << '\n';
      return 0;
    }
  }
}
