// problem name: Pi
// problem link: https://onlinejudge.org/index.php?option=onlinejudge&Itemid=99999999&page=show_problem&category=0&problem=353&mosmsg=Submission+received+with+ID+30981754
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
  int n;
  while (cin >> n and n) {
    int arr[n];
    ring(0, n) cin >> arr[i];
    int total = (n * (n - 1)) / 2;
    int cnt = 0;
    ring(0, n - 1) {
      for (int j = i + 1; j < n; j++) {
        if (__gcd(arr[i], arr[j]) == 1)
          cnt++;
      }
    }
    if (cnt == 0) {
      printf("No estimate for this data set.\n");
    } else {
      double ans = sqrt((6.0 * total) / (double)cnt);
      ans = round(ans * 1000000.0) / 1000000.0;
      printf("%.6lf\n", ans);
    }
  }
}

int main() { solve(); }