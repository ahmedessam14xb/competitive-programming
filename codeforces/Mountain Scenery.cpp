// problem name: Mountain Scenery
// problem link: https://codeforces.com/contest/218/problem/A
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

int main() {
  int n, k;
  cin >> n >> k;
  int arr[2 * n + 1];
  ring(0, 2 * n + 1) cin >> arr[i];
  for (int i = 1; i < 2 * n and k; i++) {
    if (i & 1 and arr[i] - 1 > arr[i - 1] and arr[i] - 1 > arr[i + 1]) {
      arr[i]--;
      k--;
    }
  }
  ring(0, 2 * n + 1) cout << arr[i] << " ";
  cout << '\n';
}