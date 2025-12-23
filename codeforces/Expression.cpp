// problem name: Expression
// problem link: https://codeforces.com/problemset/problem/479/A
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
  int a = nxti(), b = nxti(), c = nxti();
  if (a == 1 )
    b++;
  if (b == 1) {
    if (a < c)
      a++;
    else
      c++;
  }
  if(c == 1) b++;
  cout << a * b * c << '\n';
}
