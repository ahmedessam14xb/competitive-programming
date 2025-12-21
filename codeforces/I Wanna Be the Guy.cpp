// problem name: I Wanna Be the Guy
// problem link: https://codeforces.com/contest/469/problem/A
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
  int p;
  cin >> p;
  set<int> sofints;
  ring(0, p) {
    int tmp;
    cin >> tmp;
    sofints.insert(tmp);
  }
  int q;
  cin >> q;
  ring(0, q) {
    int tmp;
    cin >> tmp;
    sofints.insert(tmp);
  }
  if (sofints.size() == n)
    cout << "I become the guy.\n";
  else
  cout << "Oh, my keyboard!\n";
}
