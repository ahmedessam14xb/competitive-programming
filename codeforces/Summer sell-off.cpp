// problem name: Summer sell-off
// problem link: https://codeforces.com/contest/810/problem/B
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
  ll n, f;
  cin >> n >> f;
  ll arr[n][2];
  ll sum = 0;
  ring(0, n) {
    cin >> arr[i][0] >> arr[i][1];
    sum += min(arr[i][0], arr[i][1]);
  }
  vcll diff;
  ring(0, n) {
    if (arr[i][0] < arr[i][1]) {
      diff.push_back(min(arr[i][0] * 2, arr[i][1]) - arr[i][0]);
    }
  }
  if (sz(diff) == 0) {
    cout << sum << '\n';
    return;
  }
  sort(all(diff), greater<int>());
  for (int i = 0; i < min((int)f, (int)sz(diff)); i++) {
    sum += diff[i];
  }
  printf("%lld\n", sum);
}

int main() { solve(); }