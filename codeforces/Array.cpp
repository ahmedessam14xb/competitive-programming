// problem name: Array
// problem link: https://codeforces.com/contest/300/problem/A
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
  int arr[n];
  int pos = 0, neg = 0;
  vci postive;
  vci negative;
  vci zeros;
  ring(0, n) {
    cin >> arr[i];
    if (arr[i] > 0)
      postive.push_back(arr[i]);
    else if (arr[i] < 0)
      negative.push_back(arr[i]);
    else
      zeros.push_back(arr[i]);
  }

  if (sz(postive) == 0) {
    postive.push_back(negative[0]);
    postive.push_back(negative[1]);
    negative.erase(negative.begin(), negative.begin() + 2);
  }
  if (sz(negative) % 2 == 0) {
    zeros.push_back(negative[sz(negative) - 1]);
    negative.pop_back();
  }
  cout << negative.size() << " ";
  for (auto x : negative)
    cout << x << " ";
  ln cout << sz(postive) << " ";
  for (auto x : postive)
    cout << x << " ";
  ln cout << sz(zeros) << " ";
  for (auto x : zeros)
    cout << x << " ";
  ln
}

int main() { solve(); }
