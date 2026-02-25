// problem name: Keyboard
// problem link: https://codeforces.com/contest/88/problem/B
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
  int n, m, x;
  cin >> n >> m >> x;
  map<char, vector<pair<int, int>>> keyboard;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      char c;
      cin >> c;
      if (c == 'S')
        c = '0';
      keyboard[c].push_back({i, j});
    }
  }
  int q;
  cin >> q;
  string s;
  cin >> s;
  int cnt = 0;
  map<char, double> visited_distance;
  for (char c : s) {
    if (keyboard.count((char)tolower(c)) == 0) {
      cout << -1 << '\n';
      return;
    }
    if (isupper(c)) {
      if (sz(keyboard['0']) == 0) {
        cout << -1 << '\n';
        return;
      }
      double min_distance = 1000.0;
      if (visited_distance.count((char)tolower(c)))
        min_distance = visited_distance[(char)tolower(c)];
      else {
        vector<pair<int, int>> charArr = keyboard[(char)tolower(c)];
        for (int i = 0; i < charArr.size(); i++) {
          for (int j = 0; j < keyboard['0'].size(); j++) {
            double distance =
                sqrt((keyboard['0'][j].first - charArr[i].first) *
                         (keyboard['0'][j].first - charArr[i].first) +
                     (keyboard['0'][j].second - charArr[i].second) *
                         (keyboard['0'][j].second - charArr[i].second));
            min_distance = min(min_distance, distance);
          }
        }
        visited_distance[(char)tolower(c)] = min_distance;
      }
      if (min_distance > x)
        cnt++;
    }
  }
  printf("%d\n", cnt);
}

int main() { solve(); }