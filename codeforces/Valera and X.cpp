// problem name: Valera and X
// problem link: https://codeforces.com/contest/404/problem/A
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
  char arr[n][n];
  ring(0, n) { scanf("%s", arr[i]); }
  char diag = arr[0][0];
  char not_diag = arr[0][1];
  if (diag == not_diag) {
    cout << "NO\n";
    return 0;
  }
  bool correct = true;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n and correct; j++) {
      if (i == j or i == n - 1 - j) {
        if (arr[i][j] != diag) {
          correct = false;
          break;
        }
      } else {
        if (arr[i][j] != not_diag) {
          correct = false;
          break;
        }
      }
    }
  }
  if (correct)
    cout << "YES\n";
  else
    cout << "NO\n";
}
