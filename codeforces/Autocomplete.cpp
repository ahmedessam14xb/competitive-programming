// problem name: Autocomplete
// problem link: https://codeforces.com/contest/53/problem/A
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
  string s;
  cin >> s;
  int n;
  cin >> n;
  string arr[n];
  ring(0, n) cin >> arr[i];
  sort(arr, arr + n);
  ring(0, n) {
    string sub = arr[i].substr(0, sz(s));
    if (sub == s) {
      cout << arr[i] << '\n';
      return;
    }
  }
  cout << s << '\n';
}

int main() { solve(); }
