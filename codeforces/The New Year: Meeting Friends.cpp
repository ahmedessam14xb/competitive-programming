// problem name: The New Year: Meeting Friends
// problem link: https://codeforces.com/contest/723/problem/A
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

void solve() {
  int a, b, c;
  cin >> a >> b >> c;
  if (a > b and a < c or a > c and a < b)
    cout << abs(a - b) + abs(a - c);
  else if (b > a and b < c or b > c and b < a)
    cout << abs(b - a) + abs(b - c);
  else
    cout << abs(c - a) + abs(c - b);
  cout << '\n';
}

int main() { solve(); }
