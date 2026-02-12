// problem name: Life Without Zeros
// problem link: https://codeforces.com/contest/75/problem/A
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

int remove_zeros(int a) {
  string s = to_string(a);
  s.erase(remove(all(s), '0'), s.end());
  return stoi(s);
}

void solve() {
  int a, b;
  cin >> a >> b;
  int tempa = a, tempb = b;
  a = remove_zeros(a);
  b = remove_zeros(b);
  if (a + b == remove_zeros(tempa + tempb)) {
    printf("YES\n");
  } else
    printf("NO\n");
}

int main() { solve(); }
