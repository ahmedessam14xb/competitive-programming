// problem name: Even Odds
// problem link: https://codeforces.com/contest/318/problem/A
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
  unsigned long long k , n;
  cin >> k >> n;
  if (n <= (k+1) / 2) {
    cout << 2 * n - 1 << '\n';
  } else {
    cout << 2 * (n - (k+1)/ 2) << '\n';
  }
}
