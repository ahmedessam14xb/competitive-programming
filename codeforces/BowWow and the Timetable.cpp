// problem name: BowWow and the Timetable
// problem link: https://codeforces.com/contest/1204/problem/A
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
  int ans = 0;
  if (s.size() & 1) {
    ans = (s.size() - 1) / 2;
    ring(1, s.size()) {
      if (s[i] == '1') {
        ans++;
        break;
      }
    }
  } else {
    ans = s.size() / 2;
  }
  printf("%d\n", ans);
}