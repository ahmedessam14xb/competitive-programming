// problem name: Bus to Udayland
// problem link: https://codeforces.com/contest/711/problem/A
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
#define ln puts("");

void solve() {
  int n;
  cin >> n;
  string arr[n];
  ring(0, n) cin >> arr[i];
  bool found = false;
  ring(0, n) {
    for (int j = 0; j < 4; j++) {
      if (arr[i][j] == arr[i][j + 1] and arr[i][j] == 'O') {
        arr[i][j] = '+';
        arr[i][j + 1] = '+';
        i = n;
        found = true;
        break;
      }
    }
  }
  if (!found)
    cout << "NO\n";
  else {
    cout << "YES\n";
    ring(0, n) cout << arr[i] << '\n';
  }
}

int main() { solve(); }
