// problem name: Arpa’s hard exam and Mehrdad’s naive cheat
// problem link: https://codeforces.com/contest/742/problem/A
#include <bits/stdc++.h>
using namespace std;

#define intmaxx INTMAX_MAX
#define intminn INTMAX_MIN
#define ll long long
#define ull unsigned long long
#define uint unsigned int
#define pb push_back
#define vci vector<int>
#define vcll vector<long long>
#define vcstr vector<string>
#define ring(a, b) for (int i = a; i < b; i++)

int main() {
  int n;
  cin >> n;
  if (n == 0)
    cout << "1\n";
  else {
    int arr[4] = {6, 8, 4, 2};
    cout << arr[n % 4];
  }
}
