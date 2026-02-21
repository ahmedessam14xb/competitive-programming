// problem name: Fence
// problem link: https://codeforces.com/contest/363/problem/B
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
  int n, k;
  cin >> n >> k;
  vci arr(n + 1), sum_arr(n + 1);
  arr[0] = 0;
  ring(1, n + 1) {
    cin >> arr[i];
    sum_arr[i] += arr[i] + sum_arr[i - 1];
  }
  int mn = INT_MAX;
  int min_index = -1;
  for (int i = 0; i < n - k + 1; i++) {
    if (mn >= sum_arr[i + k] - sum_arr[i]) {
      mn = sum_arr[i + k] - sum_arr[i];
      min_index = i;
    }
  }
  printf("%d\n", min_index + 1);
}

int main() { solve(); }