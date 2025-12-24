// problem name: Fancy Fence
// problem link: https://codeforces.com/contest/270/problem/A
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
  int t = nxti();
  while (t--) {
    bool done = false;
    int a = nxti();
    ring(3, 100000) {
      double tmpN = (i - 2) * 180.0 / a;
      if (i == tmpN and !done) {
        cout << "YES\n";
        done = true;
      }
    }
    if (!done)
      cout << "NO\n";
  }
}
