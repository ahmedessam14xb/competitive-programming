// problem name: Second Order Statistics
// problem link: https://codeforces.com/contest/22/problem/A
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
  int arr[n];
  int mn = 100000;
  ring(0, n) {
    cin >> arr[i];
    mn = min(arr[i], mn);
  }
  bool found = false;
  int s_mn = 100000;
  ring(0, n) {
    if (arr[i] > mn and arr[i] < s_mn) {
      s_mn = arr[i];
      found = true;
    }
  }
  if (found)
    cout << s_mn<< '\n';
  else
    cout << "NO\n";
}

int main() { solve(); }
