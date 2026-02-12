// problem name: Triangular numbers
// problem link: https://codeforces.com/contest/47/problem/A
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
  int arr[501];
  ring(0, 500) { arr[i] = (i * (i + 1)) / 2; }
  ring(0, 500) {
    if (arr[i] == n) {
      printf("YES\n");
      return;
    }
  }
  printf("NO\n");
}

int main() { solve(); }
