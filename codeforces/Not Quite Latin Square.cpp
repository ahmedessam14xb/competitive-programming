// problem name: Not Quite Latin Square
// problem link: https://codeforces.com/contest/1915/problem/B
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
#define ring(i, a, b) for (int i = a; i < b; i++)
#define ring0(i, n) ring(i, 0, n)
#define dring(i, j, a, b) ring0(i, a) ring0(j, b)
#define sz(n) (n).size()
#define ln puts("");

void solve() {
  int sum = (int)'A' + (int)'B' + (int)'C';
  char arr[3][3];
  int row = -1;
  dring(i, j, 3, 3) {
    cin >> arr[i][j];
    if (arr[i][j] == '?')
      row = i;
  }
  int lsum = (int)arr[row][0] + (int)arr[row][1] + (int)arr[row][2] - (int)'?';
  cout << char(sum - lsum) << '\n';
}

int main() {
  int t;
  cin >> t;
  while (t--)
    solve();
}
