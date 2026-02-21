// problem name: Lucky?
// problem link: https://codeforces.com/problemset/problem/1676/A
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
  int firstsum = 0, secondsum = 0;
  ring(0, sz(s)) {
    if (i < 3)
      firstsum += s[i] - '0';
    else
      secondsum += s[i] - '0';
  }
  if (firstsum == secondsum)
    puts("YES");
  else
    puts("NO");
}

int main() {
  int t;
  cin >> t;
  while (t--)
    solve();
}