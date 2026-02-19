// problem name: Petya and Countryside
// problem link: https://codeforces.com/contest/66/problem/B
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
  int arr[n];
  ring(0, n) cin >> arr[i];
  int mx = 1;
  for (int i = 0; i < n; i++) {
    int left = i;
    int right = i;
    int cnt = 1;
    while (left >= 1) {
      if (arr[left] >= arr[left - 1])
        left--, cnt++;
      else
        break;
    }
    while (right <= n - 2) {
      if (arr[right] >= arr[right + 1]) {
        right++;
        cnt++;
      } else
        break;
    }
    mx = max(cnt, mx);
  }
  printf("%d\n", mx);
}

int main() { solve(); }