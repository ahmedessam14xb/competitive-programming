// Problem name: Marcus
// Problem link:
// https://onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1393
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

int m, n;
const int max_size = 10;
char grid[max_size][max_size];
vector<string> ans;
string word = "IEHOVA#";
int curChar = 0;

void solve(int row, int col) {
	if (word[curChar] == '\0') return;
	if (grid[row - 1][col] == word[curChar]) {
		curChar++;
		ans.pb("forth");
		solve(row - 1, col);
	} else if (grid[row][col + 1] == word[curChar]) {
		curChar++;
		ans.pb("right");
		solve(row, col + 1);
	} else {
		curChar++;
		ans.pb("left");
		solve(row, col - 1);
	}
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		ans.clear();
		curChar = 0;
		memset(grid, '0', sizeof(grid));
		cin >> m >> n;
		int startrow, startcol;
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				cin >> grid[i][j];
				if (grid[i][j] == '@') {
					startrow = i;
					startcol = j;
				}
			}
		}
		solve(startrow, startcol);
		int index = 0;
		for (; index < ans.size() - 1; index++) {
			cout << ans[index] << " ";
		}
		cout << ans[index] << "\n";
	}
}
