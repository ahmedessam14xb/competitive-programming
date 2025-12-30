// problem name: Contest
// problem link: https://codeforces.com/contest/501/problem/A
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
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  int misha = max(3 * a / 10, a - (a / 250) * c);
  int vasya = max(3 * b / 10, b - (b / 250) * d);
  if (misha > vasya) {
    cout << "Misha\n";
  } else if (vasya > misha)
    cout << "Vasya\n";
  else
    cout << "Tie\n";
}
