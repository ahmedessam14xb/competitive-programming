// problem name: Far Relative’s Birthday Cake
// problem link: https://codeforces.com/contest/629/problem/A
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
  char arr[n][n];
  ring(0, n) { scanf("%s", arr[i]); }
  int ans = 0;
  ring(0, n) {
    int cnt = 0;
    for (int j = 0; j < n; j++) {
      if (arr[i][j] == 'C')
        cnt++;
    }
    ans += ((cnt * (cnt - 1)) / 2);
    cnt = 0;
  }
  ring(0, n) {
    int cnt = 0;
    for (int j = 0; j < n; j++) {
      if (arr[j][i] == 'C')
        cnt++;
    }
    ans += ((cnt * (cnt - 1)) / 2);
    cnt = 0;
  }
  printf("%d\n", ans);
}

int main() { solve(); }
