// problem name: Knight Moves
// problem link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=380
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

bool valid(int row, int col) {
  return (row >= 1 && row <= 8 && col >= 1 && col <= 8);
}

void solve() {
  string start, end;
  while (cin >> start >> end) {
    int s_row = start[1] - '0';
    int e_row = end[1] - '0';
    int s_col = start[0] - 'a' + 1;
    int e_col = end[0] - 'a' + 1;

    map<pair<int, int>, bool> visited;

    queue<pair<int, int>> qu;
    qu.push(make_pair(s_row, s_col));
    int depth = 0;
    int sz = 1;
    bool found = true;
    for (; !qu.empty() && found; depth++, sz = qu.size()) {
      while (sz--) {
        pair<int, int> tmp = qu.front();
        qu.pop();
        if (visited.count(tmp))
          continue;
        if (!valid(tmp.first, tmp.second))
          continue;

        if (tmp.first == e_row && tmp.second == e_col) {
          printf("To get from %s to %s takes %d knight moves.\n", start.c_str(), end.c_str(), depth);
          found = false;
          break;
        }
        // cout << tmp.first << " " << tmp.second << '\n';

        visited[make_pair(tmp.first, tmp.second)] = true;
        qu.push({tmp.first + 2, tmp.second + 1});
        qu.push({tmp.first + 2, tmp.second - 1});
        qu.push({tmp.first - 2, tmp.second + 1});
        qu.push({tmp.first - 2, tmp.second - 1});

        qu.push({tmp.first + 1, tmp.second + 2});
        qu.push({tmp.first + 1, tmp.second - 2});
        qu.push({tmp.first - 1, tmp.second + 2});
        qu.push({tmp.first - 1, tmp.second - 2});
      }
    }
  }
}

int main() { solve(); }