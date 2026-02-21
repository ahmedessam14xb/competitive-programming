// problem name: Mahmoud and a Triangle
// problem link: https://codeforces.com/contest/766/problem/B
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
  sort(arr, arr + n);
  for (int i = n - 1; i >= 2; i--) {
    if (arr[i] < arr[i - 1] + arr[i - 2]) {
      cout << "YES\n";
      return;
    }
  }
  cout << "NO\n";
}

int main() { solve(); }