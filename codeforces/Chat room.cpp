// problem name: Chat room
// problem link: https://codeforces.com/problemset/problem/58/A
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
  string word = "hello";
  int index = 0;
  string s = nxts();
  ring(0, s.size()) {
    if (word[index] == s[i]) {
      index++;
    }
    if (index == 5)
      break;
  }
  if (index == 5)
    cout << "YES\n";
  else
    cout << "NO\n";
}
