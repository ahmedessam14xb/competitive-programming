// problem name: Kuriyama Mirai's Stones
// problem link: https://codeforces.com/contest/433/problem/B
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
  ll arr[n + 1];
  arr[0] = 0;
  ring(1, n + 1) cin >> arr[i];
  ll *cum_sum = new ll[n + 1];
  ring(1, n + 1) cum_sum[i] = cum_sum[i - 1] + arr[i];
  sort(arr, arr + n + 1);
  ll *sort_cum_sum = new ll[n + 1];
  ring(1, n + 1) sort_cum_sum[i] = sort_cum_sum[i - 1] + arr[i];
  int m;
  cin >> m;
  while (m--) {
    int type, l, r;
    cin >> type >> l >> r;
    if (type == 1) {
      cout << cum_sum[r] - cum_sum[l - 1] << '\n';
    } else {
      cout << sort_cum_sum[r] - sort_cum_sum[l - 1] << '\n';
    }
  }
}

int main() { solve(); }