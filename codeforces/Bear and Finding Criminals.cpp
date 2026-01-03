// problem name: Bear and Finding Criminals
// problem link: https://codeforces.com/contest/680/problem/B
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
#define sz(n) (n).size()
#define ln puts("");

void solve() {
  int n, t;
  cin >> n >> t;
  int arr[n];
  ring(0, n) cin >> arr[i];
  int left = t - 1, right = t - 1;
  int cnt = 0;
  bool lefty = true, righty = true;
  while (left >= 0 and right < n) {
    if (left == right and arr[left] == 1)
      cnt++;
    else if (arr[left] == arr[right] and arr[left] == 1)
      cnt += 2;
    left--, right++;
  }
  while (left >= 0) {
    if (arr[left--])
      cnt++;
  }
  while (right < n) {
    if (arr[right++])
      cnt++;
  }
  cout << cnt << '\n';
}

int main() { solve(); }
