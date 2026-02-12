// problem name: Joysticks
// problem link: https://codeforces.com/contest/651/problem/A
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
  int a1, a2;
  cin >> a1 >> a2;
  int index = 0;
  while (a1 > 0 and a2 > 0) {
    if (a1 == 1 and a2 == 1)
      break;
    int mn = min(a1, a2);
    if (mn == a1)
      a1++, a2 -= 2;
    else if (mn == a2)
      a2++, a1 -= 2;
    else
      a1++, a2 -= 2;
    index++;
  }
  printf("%d\n", index);
}

int main() { solve(); }
