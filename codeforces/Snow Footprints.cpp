// problem name: Snow Footprints
// problem link: https://codeforces.com/contest/298/problem/A
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
  int n;
  cin >> n;
  int lastR = -1, lastL = -1;
  char arr[n];
  ring(0, n) cin >> arr[i];
  ring(0, n) {
    if (arr[i] == 'R')
      lastR = i;
    else if (arr[i] == 'L') {
      lastL = i;
      break;
    }
  }
  if (lastR == -1) {
    cout << lastL + 1 << " " << lastL;
  } else if (lastL == -1) {
    cout << lastR + 1 << " " << lastR + 2;
  } else {
    cout << lastR + 1 << " " << lastL + 1;
  }
  cout << '\n';
}