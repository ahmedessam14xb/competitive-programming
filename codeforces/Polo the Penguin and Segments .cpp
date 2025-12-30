// problem name: Polo the Penguin and Segments 
// problem link: https://codeforces.com/contest/289/problem/A
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
  ll dist = 0;
  while (n--) {
    int a, b;
    cin >> a >> b;
    dist += (b - a) + 1;
  }
  if (dist % k == 0)
    cout << 0;
  else
    cout << k - (dist % k);
  cout << '\n';
}