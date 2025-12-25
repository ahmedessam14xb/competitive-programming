// problem name: Dice Tower
// problem link: https://codeforces.com/contest/225/problem/A
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
  int n;
  cin >> n;
  int top;
  cin >> top;
  bool out = true;
  while (n--) {
    int a, b;
    cin >> a >> b;
    if (a == top or a == 7 - top or b == top or b == 7 - top)
      out = false;
  }
  if (out) {
    cout << "YES\n";
  } else
    cout << "NO\n";
}
