// problem name: Playing with Dice
// problem link: https://codeforces.com/contest/378/problem/A
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
  int a, b;
  cin >> a >> b;
  int arr[6] = {1, 2, 3, 4, 5, 6};
  int a_wins = 0, b_wins = 0, draw = 0;
  ring(0, 6) {
    int a_diff = abs(a - arr[i]);
    int b_diff = abs(b - arr[i]);
    if (a_diff < b_diff)
      a_wins++;
    else if (a_diff > b_diff)
      b_wins++;
    else
      draw++;
  }
  printf("%d %d %d\n", a_wins, draw, b_wins);
}

int main() { solve(); }
