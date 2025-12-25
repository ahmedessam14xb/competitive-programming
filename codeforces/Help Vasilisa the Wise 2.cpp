// problem name: Help Vasilisa the Wise 2
// problem link: https://codeforces.com/contest/143/problem/A
#include <bits/stdc++.h>
using namespace std;

int nxti() {
  int x;
  cin >> x;
  return x;
}
string nxts() {
  string x;
  cin >> x;
  return x;
}
#define intmaxx INTMAX_MAX
#define intminn INTMAX_MIN
#define ll long long
#define ull unsigned long long
#define uint unsigned int
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define vci vector<int>
#define vcll vector<long long>
#define vcstr vector<string>
#define ring(a, b) for (int i = a; i < b; i++)

int main() {
  ll r1, r2, c1, c2, d1, d2;
  cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;
  for (int i = 1; i <= 9; i++) {
    for (int j = 1; j <= 9; j++) {
      for (int k = 1; k <= 9; k++) {
        for (int l = 1; l <= 9; l++) {
          if (i + j == r1 and i + k == c1 and i + l == d1 and j + l == c2 and
              j + k == d2 and k + l == r2 
            and i != j and i != k and i != l and j != k and j != l and k != l) {
            cout << i << " " << j << "\n" << k << " " << l << '\n';
            return 0;
          }
        }
      }
    }
  }
  cout << -1 << '\n';
}
