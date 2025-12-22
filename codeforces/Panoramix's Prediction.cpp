// problem name: Panoramix's Prediction
// problem link: https://codeforces.com/contest/80/problem/A
#include <bits/stdc++.h>
using namespace std;

#define intmaxx INTMAX_MAX
#define intminn INTMAX_MIN
#define ll long long
#define ull unsigned long long
#define uint unsigned int
#define pb push_back
#define vci vector<int>
#define vcll vector<long long>
#define vcstr vector<string>
#define ring(a, b) for (int i = a; i < b; i++)

int main() {
  int primes[17] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59};
  int n, m;
  cin >> n >> m;
  bool found = false;
  for (int i = 0; i < 16; i++) {
    if (primes[i] == n) {
      found = true;
      if (primes[i + 1] == m) {
        cout << "YES\n";
      } else
        cout << "NO\n";
      break;
    }
  }
  if (!found)
    cout << "NO\n";
}
