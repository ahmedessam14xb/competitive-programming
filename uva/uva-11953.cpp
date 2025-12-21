#include <bits/stdc++.h>
using namespace std;

#define intmaxx INTMAX_MAX
#define intminn INTMAX_MIN
#define ll long long
#define ull unsigned long long
#define uint unsigned int
#define pb push_back
#define vci vector<int>
#define vcll vector<long long>
#define vcstr vector<string>
#define ring(a, b) for (int i = a; i < b; i++)

const int maxx = 101;
bool visited[maxx][maxx];
char grid[maxx][maxx];
int n;

bool valid(int row, int col) {
  return (row >= 0 and row < n and col >= 0 and col < n);
}
void dfs(int row, int col) {
  if (!valid(row, col))
    return;
  if (visited[row][col] || grid[row][col] == '.')
    return;
  visited[row][col] = true;
  dfs(row + 1, col);
  dfs(row - 1, col);
  dfs(row, col + 1);
  dfs(row, col - 1);
}
int main() {
  int T;
  cin >> T;
  int testcase = 1;
  while (T--) {
    memset(visited, false, sizeof(visited));
    memset(grid, '.', sizeof(grid));
    cin >> n;
    ring(0, n) { scanf("%s", grid[i]); }
    int cnt = 0;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (!visited[i][j] and grid[i][j] == 'x') {
          cnt++;
          dfs(i, j);
        }
      }
    }
    printf("Case %d: %d\n", testcase++, cnt);
  }
}
