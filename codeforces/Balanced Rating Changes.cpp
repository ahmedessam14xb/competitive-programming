// problem name: Balanced Rating Changes
// problem link: https://codeforces.com/contest/1237/problem/A
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
  int n;
  cin >> n;
  int arr[n];
  ll sum = 0;
  ring(0, n) {
    cin >> arr[i];
    sum += arr[i] / 2;
  }
  if (sum > 0) {
    for (int i = 0; i < n and sum; i++) {
      if (arr[i] & 1 and arr[i] < 0) {
        arr[i]--;
        sum--;
      }
    }
  }
  if (sum < 0) {
    for (int i = 0; i < n and sum; i++) {
      if (arr[i] & 1 and arr[i] > 0) {
        arr[i]++;
        sum++;
      }
    }
  }
  ring(0, n) cout << arr[i] / 2 << '\n';
}