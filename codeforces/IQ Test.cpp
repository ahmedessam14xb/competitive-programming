// problem name: IQ Test
// problem link: https://codeforces.com/contest/287/problem/A
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
  char arr[4][4];
  ring(0, 4) { scanf("%s", arr[i]); }
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      int diff = 0;
      if (arr[i][j] != arr[i][j + 1])
        diff++;
      if (arr[i][j] != arr[i + 1][j + 1])
        diff++;
      if (arr[i][j] != arr[i + 1][j])
        diff++;
      if (diff == 3 or diff == 1 or diff == 0) {
        cout << "YES\n";
        return 0;
      }
    }
  }
  cout << "NO\n";
}