// problem name: Mashmokh and Lights
// problem link: https://codeforces.com/contest/415/problem/A
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
  int n, m;
  cin >> n >> m;
  int *lights = new int[n](), arr[m];
  ring(0, m) { cin >> arr[i]; }
  ring(0, m) {
    for (int j = arr[i] - 1; j < n && lights[j] == 0; j++) {
      lights[j] = arr[i];
    }
  }
  ring(0, n) cout << lights[i] << " ";
  ln;
}

int main() { solve(); }
