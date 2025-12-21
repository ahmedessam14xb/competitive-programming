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

int t;
const int max_size = 25;
char arr[max_size][max_size];
bool visited[max_size][max_size];

bool outOfGrid(int row, int col) {
  if (row < 0 or col < 0 or row >= t or col >= t) {
    return false;
  }
  return true;
}

void dfs(int row, int col) {
  if (!outOfGrid(row, col) || arr[row][col] != '1')
    return;
  if (visited[row][col])
    return;

  visited[row][col] = true;
  // dfs
  dfs(row + 1, col);
  dfs(row -1, col);
  dfs(row, col + 1);
  dfs(row, col-1);
  dfs(row + 1, col + 1);
  dfs(row + 1, col - 1);
  dfs(row - 1, col + 1);
  dfs(row - 1, col - 1);
}

int main() {
  int testcase = 1;
  while (scanf("%d", &t) != EOF) {
    memset(visited, false, sizeof(visited));
    for (int i = 0; i < t; i++) {
      for (int j = 0; j < t; j++)
        cin >> arr[i][j];
    }
    int cnt = 0;
    for (int i = 0; i < t; i++) {
      for (int j = 0; j < t; j++) {
        if (visited[i][j])
          continue;
        if (arr[i][j] != '1')
          continue;
        dfs(i, j);
        cnt++;
      }
    }
    printf("Image number %d contains %d war eagles.\n", testcase++, cnt);
  }
}
