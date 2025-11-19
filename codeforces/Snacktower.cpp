// problem name: Snacktower
// problem link: https://codeforces.com/problemset/problem/767/A
#include <bits/stdc++.h>
using namespace std;

#define intmaxx INTMAX_MAX
#define intminn INTMAX_MIN
#define ll long long
#define ull unsigned long long
#define uint unsigned int
#define pb push_back
#define vc vector<int>
#define vci vector<int>
#define vcll vector<long long>
#define vcstr vector<string>
#define ring(a, b) for (int i = a; i < b; i++)
int main() {
  int n; cin >> n;
  int freq_arr[n], arr[n];
  memset(freq_arr, 0, sizeof(freq_arr));
  int temp_n = n;
  ring(0, n){
    cin >> arr[i];
    freq_arr[arr[i] - 1] = 1;
    while(temp_n >= 1 and freq_arr[temp_n - 1]){
      cout << temp_n << " " ;
      temp_n--;
    }
    cout << '\n';
  }
}