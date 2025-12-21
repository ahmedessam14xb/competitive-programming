// problem name: Olesya and Rodion
// problem link: https://codeforces.com/contest/584/problem/A
#include <bits/stdc++.h>
using namespace std;

#define intmaxx INTMAX_MAX
#define intminn INTMAX_MIN
#define ll long long
#define ull unsigned long long
#define uint unsigned int
#define pb push_back
#define vci vector<int>
#define vcll vector<long long>
#define vcstr vector<string>
#define ring(a, b) for (int i = a; i < b; i++)

int main() {
  int n, t;
  cin >> n >> t;
  if(n == 1 and t == 10){
    cout << -1 ;
    return 0;
  }
  if (t != 10) {
    ring(0, n) cout << t;
  } else {
    ring(0, n - 1) cout << 1 ;
    cout << 0;
  }
}
