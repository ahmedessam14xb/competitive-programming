// problem name: Cupboards
// problem link: https://codeforces.com/contest/248/problem/A
#include <bits/stdc++.h>
using namespace std;

#define intmaxx INTMAX_MAX
#define intminn INTMAX_MIN
#define ll long long
#define ull unsigned long long
#define uint unsigned int
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define vci vector<int>
#define vcll vector<long long>
#define unmapii unordered_map<int, int>
#define unmapsi unordered_map<string, int>
#define vcstr vector<string>
#define ring(i, a, b) for (int i = a; i < b; i++)
#define ring0(i, n) ring(i, 0, n)
#define dring(i, j, a, b) ring0(i, a) ring0(j, b)
#define sz(n) (n).size()
#define ln puts("");

void solve() {
  int n;
  cin >> n;
  int tmpN = n;
  int closeLift = 0, openLift = 0, closeRight = 0, openRight = 0;
  while (n--) {
    int x, y;
    cin >> x >> y;
    if (x == 0) {
      closeLift++;
    } else if (x == 1)
      openLift++;

    if (y == 0)
      closeRight++;
    else if (y == 1)
      openRight++;
  }
  // cout << openLift << " " << closeLift << "\n"; 
  // cout << openRight << " " <<closeRight << '\n';

  int mn = min(openLift, closeLift) + min(openRight, closeRight);
  cout << mn << '\n';
}

int main() { solve(); }
