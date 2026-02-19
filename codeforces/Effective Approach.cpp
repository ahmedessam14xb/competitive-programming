// problem name: Effective Approach
// problem link: https://codeforces.com/contest/227/problem/B
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
  int n;
  cin >> n;
  unordered_map<ll, ll> umap;
  ring(0, n) {
    int x;
    cin >> x;
    umap[x] = i + 1;
  }
  int m;
  cin >> m;
  ll vasya = 0;
  ll petya = 0;
  ring(0, m) {
    int q;
    cin >> q;
    ll pos = umap[q];
    vasya += pos;
    petya += n - pos + 1;
  }
  cout << vasya << " " << petya << '\n';
}

int main() { solve(); }