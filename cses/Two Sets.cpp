// problem name: Two Sets
// problem link: https://cses.fi/problemset/task/1092/
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
  if (n % 4 == 2 or n % 4 == 1)
    cout << "NO\n";
  else {
    cout << "YES\n";
    int start = 1;
    vci one, two;
    if (n % 4 == 3) {
      start += 3;
      one.push_back(1);
      one.push_back(2);
      two.push_back(3);
    }
    for (; start < n; start += 4) {
      one.push_back(start);
      one.push_back(start + 3);
      two.push_back(start + 1);
      two.push_back(start + 2);
    }
    cout << sz(one) << '\n';
    for (auto x : one)
      cout << x << " ";
    cout << '\n';
    cout << sz(two) << '\n';
    for (auto x : two)
      cout << x << " ";
    cout << '\n';
  }
}

int main() { solve(); }