// problem name: Counterexample 
// problem link: https://codeforces.com/contest/483/problem/A
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
  ll l, r;
  cin >> l >> r;
  if (l & 1) {
    if (r - l <= 2) {
      cout << -1 << '\n';
    } else {
      cout << l + 1 << " " << l + 2 << " " << l + 3 << '\n';
    }
  } else {
    if (r - l <= 1) {
      cout << -1 << '\n';
    } else {
      cout << l << " " << l + 1 << " " << l + 2 << '\n';
    }
  }
}
