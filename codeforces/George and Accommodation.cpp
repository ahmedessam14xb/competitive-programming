// problem name: George and Accommodation
// problem link: https://codeforces.com/contest/467/problem/A
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
  int n;
  cin >> n;
  int cnt = 0;
  while (n--) {
    int p, q;
    cin >> p >> q;
    if (q - p >= 2)
      cnt++;
  }
  printf("%d\n", cnt);
}

int main() { solve(); }
