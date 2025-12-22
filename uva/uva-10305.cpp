// Problem name: Ordering Tasks
// Problem link:
// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1246
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

vector<vector<int>> adjList;
bool visited[101];
vector<int> ans;

void dfs(int task) {
	if (visited[task]) return;
	visited[task] = true;
	ans.push_back(task);
	for (auto child : adjList[task]) {
		dfs(child);
	}
}

int main() {
	int n, m;
	while (cin >> n >> m) {
		if (n == m and m == 0) break;
		adjList.clear();
		adjList.resize(n + 1);
		memset(visited, false, sizeof(visited));
		ans.clear();
		while (m--) {
			int i, j;
			cin >> i >> j;
			adjList[i].push_back(j);
		}
		for (int i = 1; i <= n; i++) {
			if (!visited[i] and adjList[i].size() > 0) {
				dfs(i);
			}
		}
		for (int i = 1; i <= n; i++) {
			if (!visited[i]) ans.push_back(i);
		}
		for (auto x : ans) cout << x << " ";
		cout << '\n';
	}
}
