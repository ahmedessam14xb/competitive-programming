// problem name: Colorful Field
// problem link: https://codeforces.com/contest/79/problem/B
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
  int n, m, k, t;
  cin >> n >> m >> k >> t;
  set<pair<int, int>> wastes;
  vector<int> W;
  while (k--) {
    int x, y;
    cin >> x >> y;
    wastes.insert({x, y});
    W.push_back((x - 1) * m + y);
  }
  sort(all(W)); 
  string crops[3] = {"Carrots", "Kiwis", "Grapes"};
  while (t--) {
    int x, y;
    cin >> x >> y;
    if (wastes.count({x, y}))
      cout << "Waste\n";
    else {
      int num = (x - 1) * m + (y-1) ;
      int cnt = 0;
      for (auto i : W) {
        if (i <=num)
        cnt++;
        else
          break;
      }
      cout << crops[(num-cnt) % 3] << '\n';
    }
  }
}

int main() { solve(); }