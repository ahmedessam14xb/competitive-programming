// problem name: Group of Students
// problem link: https://codeforces.com/contest/357/problem/A
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
  int m;
  cin >> m;
  int arr[m];
  int sum = 0;
  ring(0, m) cin >> arr[i], sum += arr[i];
  int x, y;
  cin >> x >> y;
  int left = 0, right = sum;
  int ans = 0;
  ring(0, m) {
    left += arr[i];
    right -= arr[i];
    if (left >= x and left <= y && right >= x and right <= y) {
      ans = i + 2;
      break;
    }
  }
  if (ans)
    printf("%d\n", ans);
  else
    printf("0\n");
}

int main() { solve(); }
