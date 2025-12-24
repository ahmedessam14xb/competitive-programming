// problem name: Wasted Time
// problem link: https://codeforces.com/contest/127/problem/A
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
  int n = nxti(), k = nxti();
  int arr[n][2];
  ring(0, n) { cin >> arr[i][0] >> arr[i][1]; }
  double distance = 0;
  ring(0, n - 1) {
    distance += sqrt((arr[i + 1][0] - arr[i][0]) * (arr[i + 1][0] - arr[i][0]) +
                     (arr[i + 1][1] - arr[i][1]) * (arr[i + 1][1] - arr[i][1]));
  }
  printf("%.9lf\n", distance/50.0 * k);
}
