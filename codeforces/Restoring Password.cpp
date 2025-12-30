// problem name: Restoring Password
// problem link: https://codeforces.com/contest/94/problem/A
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
  string s;
  cin >> s;
  string arr[10];
  ring(0, 10) { cin >> arr[i]; }
  for (int i = 0; i < s.size() - 9; i += 10) {
    string tmp = s.substr(i, 10);
    ring(0, 10) {
      if (tmp == arr[i])
        cout << i;
    }
  }
  cout << '\n';
}
