// problem name: Brain's Photos
// problem link: https://codeforces.com/contest/707/problem/A
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
  int n, m;
  cin >> n >> m;
  bool color = false;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      char tmp;
      cin >> tmp;
      if (tmp != 'B' and tmp != 'W' and tmp != 'G'){
        color = true;
      }
    }
  }
  if (color) {
    cout << "#Color\n";
  } else {
    cout << "#Black&White\n";
  }
}
