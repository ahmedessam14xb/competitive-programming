// Problem name: TOE1 - Tic-Tac-Toe ( I )
// Problem link: https://www.spoj.com/problems/TOE1/
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

bool is_win(vector<char> config) {
	bool rows = (config[0] != '.' && config[0] == config[1] &&
		     config[1] == config[2]) ||
		    (config[3] != '.' && config[3] == config[4] &&
		     config[4] == config[5]) ||
		    (config[6] != '.' && config[6] == config[7] &&
		     config[7] == config[8]);

	bool columns = (config[0] != '.' && config[0] == config[3] &&
			config[3] == config[6]) ||
		       (config[1] != '.' && config[1] == config[4] &&
			config[4] == config[7]) ||
		       (config[2] != '.' && config[2] == config[5] &&
			config[5] == config[8]);

	bool diagonals = (config[0] != '.' && config[0] == config[4] &&
			  config[4] == config[8]) ||
			 (config[2] != '.' && config[2] == config[4] &&
			  config[4] == config[6]);

	return rows || columns || diagonals;
}

map<vector<char>, bool> visited;

bool bfs(vector<char> dest) {
	vector<char> start(9, '.');
	queue<pair<vector<char>, char>> qu;
	qu.push({start, 'X'});
	while (!qu.empty()) {
		pair<vector<char>, char> begin = qu.front();
		qu.pop();
		if (visited[begin.first]) continue;
		visited[begin.first] = true;

		if (begin.first == dest) return true;

		if (is_win(begin.first)) continue;

		for (int i = 0; i < 9; i++) {
			if (begin.first[i] == '.') {
				begin.first[i] = begin.second;
				char tmp = begin.second;
				begin.second =
				    (begin.second == 'X' ? 'O' : 'X');

				qu.push(begin);
				begin.first[i] = '.';
				begin.second = tmp;
			}
		}
	}
	return false;
}

void solve() {
	visited.clear();
	vector<char> dest(9);
	for (auto& c : dest) cin >> c;
	if (bfs(dest))
		printf("yes\n");
	else
		printf("no\n");
}

int main() {
	int n;
	cin >> n;
	while (n--) solve();
}
