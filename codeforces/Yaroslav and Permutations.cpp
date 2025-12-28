// problem name: Yaroslav and Permutations
// problem link: https://codeforces.com/contest/296/problem/A
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
#define vcstr vector<string>
#define ring(a, b) for (int i = a; i < b; i++)
const long double PI = acos(-1.0);

int main() {
  int n;
  cin >> n;
  int arr[n];
  int freq_arr[1001] = {0};
  ring(0, n) {
    cin >> arr[i];
    freq_arr[arr[i]]++;
  }
  int mx_num, mx_cnt = 0;
  ring(0, 1001) {
    if (freq_arr[i] > mx_cnt) {
      mx_cnt = freq_arr[i];
      mx_num = i;
    }
  }
  int cnt = 0;
  ring(0, 1001) {
    if (i != mx_num)
      cnt += freq_arr[i];
  }
  if (cnt + 1 >= mx_cnt or n == 1)
    cout << "YES\n";
  else
    cout << "NO\n";
}