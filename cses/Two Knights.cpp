// problem name: Two Knights
// problem link: https://cses.fi/problemset/task/1072/
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
#define ring(a, b) for (int i = a; i < b; i++)
#define sz(n) (n).size()
#define ln puts("");

void solve() {
  int n;
  cin >> n;
  ll start = 1;
  while (start <= n) {
    if (start == 1)
      cout << "0\n";
    else if (start == 2)
      cout << "6\n";
    else if (start == 3)
      cout << "28\n";
    else {
      ll ans = start * start * (start * start - 1);
      ans -= ((10 + 4 * (start - 4)) * 2);
      ans -= ((14 + 6 * (start - 4)) * 2);
      ans -= ((20 + 8 * (start - 4)) * (start - 4));
      cout << ans / 2 << '\n';
    }
    start++;
  }
}

int main() { solve(); }