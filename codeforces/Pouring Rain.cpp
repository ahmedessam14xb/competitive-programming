// problem name: Pouring Rain
// problem link: https://codeforces.com/contest/667/problem/A
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
  double h, d, v, e;
  cin >> d >> h >> v >> e;
  double t = (4 * v) / (PI * d * d);
  if (t > e)
    cout << "YES\n" << h / (t - e) << '\n';
  else
    cout << "NO\n";
}