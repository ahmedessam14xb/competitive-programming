// problem name: Static Range Sum Queries
// problem link: https://cses.fi/problemset/task/1646/
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
  int n, q;
  cin >> n >> q;
  vcll cum_sum(n + 1), arr(n + 1);
  ring(1, n + 1) {
    cin >> arr[i];
    cum_sum[i] += arr[i] + cum_sum[i - 1];
  }
  while (q--) {
    int a, b;
    cin >> a >> b;
    cout << cum_sum[b] - cum_sum[a - 1] << '\n';
  }
}

int main() { solve(); }