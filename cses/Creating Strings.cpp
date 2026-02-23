// problem name: Creating Strings
// problem link: https://cses.fi/problemset/task/1622/
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
  sort(all(s));
  vcstr arr;
  do {
    arr.push_back(s);
  } while (next_permutation(s.begin(), s.end()));
  cout << sz(arr) << '\n';
  for (auto s : arr)
    cout << s << '\n';
}

int main() { solve(); }