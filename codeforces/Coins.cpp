// problem name: Coins
// problem link: https://codeforces.com/contest/47/problem/B
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
#define sz(n) (n).size()
#define ln puts("");

ll totalSum(ll n) { return 2 + (n * (n - 1)) / 2 - 1; }

void solve() {
  int a = 0, b = 0, c = 0;
  ring(0, 3) {
    string s;
    cin >> s;
    if (s[1] == '>') {
      if (s[0] == 'A')
        a++;
      else if (s[0] == 'B')
        b++;
      else
        c++;
    } else {
      if (s[2] == 'A')
        a++;
      else if (s[2] == 'B')
        b++;
      else
        c++;
    }
  }
  if (a == b and b == c)
    cout << "Impossible\n";
  else {
    if (c == 2 and b == 1)
      cout << "ABC";
    else if (c == 2 and a == 1)
      cout << "BAC";
    else if (b == 2 and a == 1)
      cout << "CAB";
    else if (b == 2 and c == 1)
      cout << "ACB";
    else if (a == 2 and c == 1)
      cout << "BCA";
    else
      cout << "CBA";
      ln
  }
}

int main() { solve(); }
