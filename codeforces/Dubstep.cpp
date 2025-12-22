// problem name: Dubstep
// problem link: https://codeforces.com/contest/208/problem/A
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
  string s;
  cin >> s;
  int i = 0;
  vcstr words;
  for (; i < s.size() - 2 and s.size() > 2;) {
    if (s[i] == 'W' and s[i + 1] == 'U' and s[i + 2] == 'B') {
      i += 3;
    } else {
      string word = "";
      while (true) {
        if (i >= s.size())
          break;
        if (s[i] == 'W' and s[i + 1] == 'U' and s[i + 2] == 'B') {
          break;
        }
        word = word + s[i++];
      }
      words.push_back(word);
    }
  }
  string word = "";
  while (i < s.size()) {
    word += s[i++];
  }
  words.push_back(word);
  for (auto x : words)
    cout << x << " ";
  cout << '\n';
}
