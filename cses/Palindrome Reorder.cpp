// problem name: Palindrome Reorder
// problem link: https://cses.fi/problemset/task/1755/
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
  int freqArr[26] = {0};
  ring(0, sz(s)) { freqArr[s[i] - 'A']++; }
  int odd = 0;
  ring(0, 26) {
    if (freqArr[i] & 1)
      odd++;
  }
  if (odd > 1) {
    cout << "NO SOLUTION\n";
    return;
  }
  ring(0, 26) {
    if (!(freqArr[i] & 1)) {
      for (int j = 0; j < freqArr[i] / 2; j++)
        cout << char('A' + i);
    }
  }
  ring(0, 26) {
    if (freqArr[i] & 1) {
      for (int j = 0; j < freqArr[i]; j++)
        cout << char('A' + i);
    }
  }
  for (int i = 25; i >= 0; i--) {
    if (!(freqArr[i] & 1)) {
      for (int j = 0; j < freqArr[i] / 2; j++) cout << char('A' + i);
    }
  }
  ln;
}

int main() { solve(); }