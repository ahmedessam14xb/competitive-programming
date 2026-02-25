// Problem name: TOE2 - Tic-Tac-Toe ( II )
// Problem link: https://www.spoj.com/problems/TOE2/
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

set<string> finals;
bool isWin(string state) {
	for (int i = 0; i < 9; i += 3) {
		if (state[i] != '.' and state[i + 1] == state[i] and
		    state[i + 2] == state[i + 1])
			return true;
	}
	for (int i = 0; i < 3; i++) {
		if (state[i] != '.' and state[i + 3] == state[i] and
		    state[i + 6] == state[i + 3])
			return true;
	}
	if (state[0] != '.' and state[4] == state[0] and state[8] == state[4])
		return true;
	if (state[2] != '.' and state[4] == state[2] and state[6] == state[4])
		return true;
	return false;
}

map<string, bool> visited;

void solve() {
	string start = ".........";
	queue<string> qu;
	qu.push(start);
	bool x_turn = true;
	int depth = 0;
	while (!qu.empty()) {
		depth++;
		int sz = sz(qu);
		while (sz--) {
			string state = qu.front();
			qu.pop();

			if (visited[state])
				continue;
			else
				visited[state] = true;
			if (depth == 10 || isWin(state)) {
				finals.insert(state);
				continue;
			}

			for (int i = 0; i < 9; i++) {
				if (state[i] == '.') {
					if (x_turn)
						state[i] = 'X';
					else
						state[i] = 'O';
					qu.push(state);
					state[i] = '.';
				}
			}
		}
		x_turn = !x_turn;
	}
}

int main() {
	solve();
	string inp;
	while (cin >> inp and inp != "end") {
		if (finals.count(inp))
			cout << "valid\n";
		else
			cout << "invalid\n";
	}
}
