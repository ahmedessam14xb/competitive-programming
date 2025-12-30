// problem name: Ksenia and Pan Scales
// problem link: https://codeforces.com/contest/382/problem/A
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

int main() {
  string s, ss;
  cin >> s >> ss;
  int before = 0, after = 0;
  bool found = false;
  ring(0, s.size()) {
    if (s[i] == '|') {
      found = true;
      continue;
    }
    if (!found)
      before++;
    else
      after++;
  } 
  if (abs(before - after) <= ss.size() and
      (ss.size() - abs(before - after)) % 2 == 0) {
    int index = 0;
    while (before < after) {
      s = ss[index] + s;
      before++;
      index++;
    }
    while (after < before) {
      s.push_back(ss[index]);
      after++;
      index++;
    }
    for (; index < ss.size();) {
      s = ss[index] + s;
      s.push_back(ss[index + 1]);
      index += 2;
    }
    cout << s << '\n';

  } else
    cout << "Impossible\n";
}