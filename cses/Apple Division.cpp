// problem name: Apple Division
// problem link: https://cses.fi/problemset/task/1623/
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

ll cal_min(ll index, ll sum1, ll sum2, vcll nums) {
  if (index == sz(nums))
    return abs(sum1 - sum2);

  ll res1 = cal_min(index + 1, sum1 + nums[index], sum2, nums);
  ll res2 = cal_min(index + 1, sum1, sum2 + nums[index], nums);

  return min(res1, res2);
}

void solve() {
  int n;
  cin >> n;
  vcll nums(n);
  for (auto &c : nums)
    cin >> c;
  
  cout << cal_min(0, 0, 0, nums) << '\n';
}

int main() { solve(); }