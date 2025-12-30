// problem name: Launch of Collider
// problem link: https://codeforces.com/contest/699/problem/A
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
  char arr[n];
  ring(0, n) cin >> arr[i];
  int cord[n];
  ring(0, n) cin >> cord[i];
  vci left, right;
  ring(0, n) {
    if (arr[i] == 'R')
      right.push_back(cord[i]);
    else
      left.push_back(cord[i]);
  }
  int mn = 1000000001;
  int j = 0;
  bool found = false;
  for (int i = 0; i < left.size(); i++) {
    for (; j < right.size(); j++) {
      if (left[i] > right[j]) {
        mn = min(mn, left[i] - right[j]);
        found = true;
      } else
        break;
    }
  }
  if (found)
    cout << mn / 2;
  else
    cout << -1;
  cout << '\n';
}