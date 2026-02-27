// problem name: Your Name
// problem link: https://codeforces.com/problemset/problem/2167/B
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
#define ring(i, a, b) for (int i = a; i < b; i++)
#define ring0(i, n) ring(i, 0, n)
#define dring(i, j, a, b) ring0(i, a) ring0(j, b)
#define sz(n) (n).size()
#define ln puts("");

void solve() {
  int x; cin >> x;
  string s, ss;
  cin >> s >> ss;
  int arr[26], arr1[26];
  memset(arr, 0, sizeof(arr));
  memset(arr1, 0, sizeof(arr1));
  ring(i, 0, sz(s)){
    arr[s[i] - 'a']++;
  }
  ring(i, 0, sz(ss)){
    arr1[ss[i] - 'a']++;
  }
  ring(i,0,25){
    if(arr[i] != arr1[i]) {
      cout << "NO\n"; return;
    }
  }
  cout << "YES\n";
}

int main() {
  int t;
  cin >> t;
  while (t--)
    solve();
}
