// problem name: Lucky Division
// problem link: https://codeforces.com/problemset/problem/122/A
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
  int n = nxti();
  int numbers[14] = {4,   7,   44,  47,  74,  77,  444,
                     447, 474, 477, 744, 747, 774, 777};
  ring(0, 13) {
    if (n % numbers[i] == 0) {
      cout << "YES\n";
      return 0;
    }
  }
  cout << "NO\n";
}
