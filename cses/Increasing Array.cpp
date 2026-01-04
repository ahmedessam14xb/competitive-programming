// problem name: Increasing Array
// problem link: https://cses.fi/problemset/task/1094/
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
#define vcstr vector<string>
#define ring(a, b) for (int i = a; i < b; i++)
#define sz(n) (n).size()
#define ln puts("");

void solve() {
  int n;
  cin >> n;
  int arr[n];
  ring(0, n) { cin >> arr[i]; }
  ll ans = 0;
  ring(1, n) {
    if (arr[i] < arr[i - 1]) {
      ans += (arr[i - 1] - arr[i]);
      arr[i] = arr[i - 1];
    }
  }
  cout << ans << '\n';
}

int main() { solve(); }
