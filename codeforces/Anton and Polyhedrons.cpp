// problem name: Anton and Polyhedrons
// problem link: https://codeforces.com/contest/785/problem/A
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
  unordered_map<string, int> un_map;
  un_map["Tetrahedron"] = 4;
  un_map["Cube"] = 6;
  un_map["Octahedron"] = 8;
  un_map["Dodecahedron"] = 12;
  un_map["Icosahedron"] = 20;
  int n;
  cin >> n;
  int ans = 0;
  while (n--) {
    string s;
    cin >> s;
    ans += un_map[s];
  }
  cout << ans << '\n';
}
