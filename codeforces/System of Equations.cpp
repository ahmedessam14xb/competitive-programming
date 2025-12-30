// problem name: System of Equations
// problem link: https://codeforces.com/contest/214/problem/A
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
  int cnt = 0;
  for (int i = 0; i <= 1000; i++) {
    for (int j = 0; j <= 1000; j++) {
      if ((i * i) + j == n and (j * j) + i == m)
        cnt++;
    }
  }
  printf("%d\n", cnt);
  ;
}
