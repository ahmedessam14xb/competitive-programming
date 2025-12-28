// problem name: Raising Bacteria
// problem link: https://codeforces.com/contest/579/problem/A
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
#define vcstr vector<string>
#define ring(a, b) for (int i = a; i < b; i++)
const long double PI = acos(-1.0);

int main() {
  ll x;
  cin >> x;
  int cnt = 0;
  while (log2(x) and x) {
    x -= pow(2, (int)log2(x));
    cnt++;
  }
  if (x == 1)
    cnt++;
  cout << cnt << '\n';
}