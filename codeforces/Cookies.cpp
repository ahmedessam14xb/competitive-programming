// problem name: Cookies
// problem link: https://codeforces.com/contest/129/problem/A
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
  cin >> n;
  int arr[n];
  int sum = 0;
  int odds = 0, evens = 0;
  ring(0, n) {
    cin >> arr[i];
    sum += arr[i];
    if (arr[i] & 1)
      odds++;
    else
      evens++;
  }
  if (sum & 1)
    printf("%d\n", odds);
  else
    printf("%d\n", evens);
}

int main() { solve(); }
