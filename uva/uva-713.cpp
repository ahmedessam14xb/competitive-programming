// problem name: Adding Reversed Numbers
// problem link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=654
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
  string a, b;
  cin >> a >> b;
  int mx_size = max(sz(a), sz(b));
  vector<int> a_num(mx_size), b_num(mx_size);
  ring(0, sz(a)) { a_num[i] = (a[i] - '0'); }
  ring(0, sz(b)) { b_num[i] = (b[i] - '0'); }
  vector<int> ans;
  ring(0, max(sz(a_num), sz(b_num))) { ans.push_back(a_num[i] + b_num[i]); }
  int last_rem = 0;
  ring(0, sz(ans)) {
    ans[i] += last_rem;
    last_rem = ans[i] / 10;
    ans[i] %= 10;
  }
  if (last_rem)
    ans.push_back(last_rem);
  int index = 0;
  while (ans[index] == 0)
    index++;
  ring(index, sz(ans)) cout << ans[i];
  ln
}

int main() {
  int n;
  cin >> n;
  while (n--)
    solve();
}