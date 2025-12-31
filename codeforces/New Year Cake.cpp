// problem name: New Year Cake
// problem link: https://codeforces.com/problemset/problem/2182/B
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

int layers(int a, int b) {
  int layers = 0, size = 1;
  while (true) {
    if (!(layers & 1)) {
      if (a >= size) {
        a -= size;
        layers++;
      } else
        break;
    } else {
      if (b >= size) {
        b -= size;
        layers++;
      } else
        break;
    }
    size *= 2;
  }
  return layers;
}

void solve() {
  ll a, b;
  cin >> a >> b;
  cout << max(layers(a, b), layers(b, a)) << '\n';
}

int main() {
  int t;
  cin >> t;
  while (t--)
    solve();
}
