// problem name: Counting Rooms
// problem link: https://cses.fi/problemset/task/1192/
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
#define vcstr vector<string>
#define ring(a, b) for (int i = a; i < b; i++)
#define sz(n) (n).size()
#define ln puts("");

bool visited[1001][1001];
int n, m;
bool valid(int r, int c) { return (r >= 0 and r < n and c >= 0 and c < m); }
string *arr;
void dfs(int r, int c) {
  if (!valid(r, c))
    return;
  if(arr[r][c] != '.') return;
  if (visited[r][c])
    return;

  visited[r][c] = true;
  dfs(r + 1, c);
  dfs(r - 1, c);
  dfs(r, c + 1);
  dfs(r, c - 1);
}

void solve() {
  cin >> n >> m;
  memset(visited, false, sizeof(visited));
  arr = new string[n];
  ring(0, n) { cin >> arr[i]; }
  int cnt = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (!visited[i][j] and arr[i][j] == '.') {
        dfs(i, j);
        cnt++;
      }
    }
  }
  cout << cnt << '\n';
}

int main() { solve(); }
