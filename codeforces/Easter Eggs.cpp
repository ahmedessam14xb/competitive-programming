// problem name: Easter Eggs
// problem link: https://codeforces.com/contest/78/problem/B
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
  string s = "ROYGBIV";
  ring(0, n / 7) cout << s;
  string si = "GBIV";
  ring(0, n % 7) cout << si[i%4];
  ln
}

int main() { solve(); }