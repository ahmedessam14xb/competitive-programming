// problem name: Chewbaсca and Number
// problem link: https://codeforces.com/contest/514/problem/A
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
#define vcstr vector<string>
#define ring(a, b) for (int i = a; i < b; i++)
const long double PI = acos(-1.0);

int main() {
  string s;
  cin >> s;
  ring(0, s.size()) {
    if (s[i] == '9' and i == 0)
      continue;
    if (s[i] - '0' >= 5) {
      s[i] = '9' - (s[i] - '0');
    }
  }
  cout << s << '\n';
}