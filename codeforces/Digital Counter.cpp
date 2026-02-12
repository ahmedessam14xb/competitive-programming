// problem name: Digital Counter
// problem link: https://codeforces.com/contest/495/problem/A
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
  int ans = 1;
  ring(0, 2) {
    if (s[i] == '0')
      ans *= 2;
    if (s[i] == '1')
      ans *= 7;
    if (s[i] == '2')
      ans *= 2;
    if (s[i] == '3')
      ans *= 3;
    if (s[i] == '4')
      ans *= 3;
    if (s[i] == '5')
      ans *= 4;
    if (s[i] == '6')
      ans *= 2;
    if (s[i] == '7')
      ans *= 5;
    if (s[i] == '8')
      ans *= 1;
    if (s[i] == '9')
      ans *= 2;
  }
  printf("%d\n", ans);
}

int main() { solve(); }
