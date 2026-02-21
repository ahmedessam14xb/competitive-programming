// problem name: Vanya and Lanterns
// problem link: https://codeforces.com/contest/492/problem/B
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
  int n, l;
  cin >> n >> l;
  vci arr(n);
  for (auto &x : arr)
    cin >> x;
  sort(all(arr));
  int mx = -1;
  for (int i = 0; i < sz(arr) - 1; i++) {
    mx = max(mx, (arr[i + 1] - arr[i]));
  }
  if (arr[0] != 0)
    mx = max(mx, arr[0] * 2);
  if (arr[n - 1] != l)
    mx = max(mx, (l - arr[n - 1]) * 2);
  printf("%.9lf\n", 0.5 * mx);
}

int main() { solve(); }