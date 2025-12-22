// problem name: Theatre Square
// problem link: https://codeforces.com/contest/1/problem/A
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
  ll n, m, a;
  cin >> n >> m >> a;
  cout << ((n + a - 1) / a) * ((m + a - 1) / a) << '\n';
}
