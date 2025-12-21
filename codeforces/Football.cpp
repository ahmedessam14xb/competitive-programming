// problem name: Football
// problem link: https://codeforces.com/contest/43/problem/A
#include <bits/stdc++.h>
using namespace std;

#define intmaxx INTMAX_MAX
#define intminn INTMAX_MIN
#define ll long long
#define ull unsigned long long
#define uint unsigned int
#define pb push_back
#define vci vector<int>
#define vcll vector<long long>
#define vcstr vector<string>
#define ring(a, b) for (int i = a; i < b; i++)

int main() {
  int n;
  cin >> n;
  unordered_map<string, int> un_map;
  while (n--) {
    string s;
    cin >> s;
    un_map[s]++;
  }
  int mx = -1;
  string ans = "";
  for (auto x : un_map) {
    if (x.second > mx)
      ans = x.first, mx = x.second;
  }
  cout << ans << '\n';
}
