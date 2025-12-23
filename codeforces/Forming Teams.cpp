// problem name: Forming Teams
// problem link: https://codeforces.com/contest/216/problem/B
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

vector<vector<int>> adjlist;
bool visited[101];
int ans = 0;

void dfs(int parent, int current, int cycles) {
  if (visited[current]) {
    if (cycles & 1 and cycles > 1)
      ans++;
    return;
  }
  visited[current] = true;
  for (auto child : adjlist[current]) {
    if (parent == child)
      continue;
    dfs(current, child, cycles + 1);
  }
}

int main() {
  int n = nxti(), m = nxti();
  adjlist.resize(n + 1);
  memset(visited, false, sizeof(visited));
  while (m--) {
    int a = nxti(), b = nxti();
    adjlist[a].push_back(b);
    adjlist[b].push_back(a);
  }
  ring(1, n + 1) {
    if (!visited[i]) {
      dfs(0, i, 0);
    }
  }
  if((n - ans) & 1) ans++;
  printf("%d\n", ans);
}
