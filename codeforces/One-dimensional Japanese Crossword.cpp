// problem name: One-dimensional Japanese Crossword
// problem link: https://codeforces.com/contest/721/problem/A
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
  int index = 0, g_size = 0;
  vector<int> sizes;
  while (index < sz(s)) {
    if (s[index] == 'B') {
      index++;
      g_size++;
    } else {
      if (g_size)
        sizes.push_back(g_size), g_size = 0;
      index++;
    }
  }
  if (g_size)
    sizes.push_back(g_size);
  cout << sz(sizes) << "\n";
  for (auto i : sizes) {
    cout << i << " ";
  }
  ln
}

int main() { solve(); }
