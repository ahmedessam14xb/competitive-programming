// problem name: President's Office
// problem link: https://codeforces.com/contest/6/problem/B
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
  int n, m;
  cin >> n >> m;
  char c;
  cin >> c;
  char arr[n][m];
  set<char> adjacents;
  ring(0, n) scanf("%s", arr[i]);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (arr[i][j] == c) {
        if (i > 0 && arr[i - 1][j] != '.')
          adjacents.insert(arr[i - 1][j]);
        if (i < n - 1 && arr[i + 1][j] != '.')
          adjacents.insert(arr[i + 1][j]);
        if (j > 0 && arr[i][j - 1] != '.')
          adjacents.insert(arr[i][j - 1]);
        if (j < m - 1 && arr[i][j + 1] != '.')
          adjacents.insert(arr[i][j + 1]);
      }
    }
  }
  adjacents.erase(c);
  cout << adjacents.size() << '\n';
}

int main() { solve(); }