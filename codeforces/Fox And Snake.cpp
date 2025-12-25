// problem name: Fox And Snake
// problem link: https://codeforces.com/problemset/problem/510/A
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
  int n, m;
  cin >> n >> m;
  bool flip = false;
  for (int i = 0; i < n; i++) {
    if(i % 2 ) flip = !flip;
    for (int j = 0; j < m; j++) {
      if (i % 2 == 0)
        cout << "#";
      else {
        if (flip and j == m - 1) {
          cout << "#";
        } else if (j == 0 and !flip)
          cout << "#";
          else cout <<".";
      }
    }

    cout << '\n';
  }
}
