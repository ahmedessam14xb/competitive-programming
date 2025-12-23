// problem name: Arrival of the General
// problem link: https://codeforces.com/problemset/problem/144/A
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
  int n = nxti();
  int arr[n];
  int mx = -1, mn = 3000;
  int mx_pos = -1, mn_pos = -1;
  ring(0, n) {
    cin >> arr[i];
    if (arr[i] > mx) {
      mx = arr[i];
      mx_pos = i;
    }
    if (arr[i] <= mn) {
      mn = arr[i];
      mn_pos = i;
    }
  }
  if (mx_pos > mn_pos)
    cout << mx_pos + (n-1 - mn_pos) - 1<< '\n';
  else
    cout << mx_pos + (n-1 - mn_pos)  << '\n';
}
