// problem name: Little Pony and Crystal Mine
// problem link: https://codeforces.com/contest/454/problem/A
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
#define sz(n) n.size()

void solve() {
  int n;
  cin >> n;
  int stars = n - 1, d = 1;
  ring(0, n) {
    ring(0, stars / 2) cout << "*";
    ring(0, d) cout << 'D';
    ring(0, stars / 2) cout << "*";
    if (i < (n - 1) / 2)
      d += 2;
    else
      d -= 2;
    stars = n - d;
    puts("");
  }
}

int main() { solve(); }
