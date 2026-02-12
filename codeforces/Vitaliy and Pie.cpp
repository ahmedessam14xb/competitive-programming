// problem name: Vitaliy and Pie
// problem link: https://codeforces.com/contest/525/problem/A
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
  int n;
  cin >> n;
  string s;
  cin >> s;
  int ans = 0;
  map<char, int> keys;
  for (char c : s) {
    if (islower(c)) {
      keys[c]++;
    } else {
      char temp = (char)tolower(c);
      if (keys[temp] > 0) {
        keys[temp]--;
      } else {
        ans++;
      }
    }
  }
  cout << ans << '\n';
}

int main() { solve(); }
