// problem name: Good Number
// problem link: https://codeforces.com/contest/365/problem/A
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
  int n, k;
  cin >> n >> k;
  int cnt = 0;
  while (n--) {
    int num;
    cin >> num;
    // if (num == 0 and k == 0) {
    //   cnt++;
    //   continue;
    // }
    set<int> digits;
    while (num) {
      digits.insert(num % 10);
      num /= 10;
    }
    if (digits.size() < k + 1)
      continue;
    auto it = digits.begin();
    if (*it == 0) {
      advance(it, k);
      if (*it == k)
        cnt++;
    }
  }
  cout << cnt << '\n';
}
