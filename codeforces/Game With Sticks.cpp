// problem name: Game With Sticks
// problem link: https://codeforces.com/problemset/problem/451/A
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
  int n = nxti(), m = nxti();
  int points = n * m;
  bool akshat = false;
  while (points) {
    akshat = !akshat;
    points -= 1 + (n - 1) + (m - 1);
    n--;
    m--;
    points = n * m;
  }
  if (akshat)
    cout << "Akshat\n";
  else
    cout << "Malvika\n";
}
