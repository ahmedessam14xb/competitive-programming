// problem name: Borze
// problem link: https://codeforces.com/problemset/problem/32/B
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
  string s; cin >> s;
  int index = 0;
  for(; index < sz(s); ){
    if(s[index] == '.') cout << 0, index++;
    else if (s[index] == '-' and s[index+1] == '.') cout << 1, index+=2;
    else cout << 2, index+=2;
  }
  ln;
}

int main() { solve(); }
