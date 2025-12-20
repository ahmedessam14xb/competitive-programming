// problem name: Keyboard
// problem link: https://codeforces.com/contest/474/problem/A
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
  string arr[3] = {"qwertyuiop", "asdfghjkl;", "zxcvbnm,./"};
  char dir;
  cin >> dir;
  string s;
  cin >> s;
  for (int i = 0; i < s.size(); i++) {
    for (int word = 0; word < 3; word++) {
      for (int ch = 0; ch < arr[word].size(); ch++) {
        if (arr[word][ch] == s[i])
          if (dir == 'R')
            cout << arr[word][ch - 1];
          else
            cout << arr[word][ch + 1];
      }
    }
  }
}
