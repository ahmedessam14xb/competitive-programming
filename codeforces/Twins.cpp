// problem name: Twins
// problem link: https://codeforces.com/contest/160/problem/A
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
  int n;
  cin >> n;
  int arr[n];
  int suma = 0, sumb = 0, cnt = 0;
  ring(0, n) {
    cin >> arr[i];
    suma += arr[i];
  }
  sort(arr, arr + n);
  for (int i = n-1; i >= 0; i--) {
    if (sumb > suma)
      break;
    sumb += arr[i];
    suma -= arr[i];
    cnt++;
  }
  cout << cnt << '\n';
}
