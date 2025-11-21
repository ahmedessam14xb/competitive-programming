// problem name: Case of the Zeros and Ones
// problem link: https://codeforces.com/contest/556/problem/A
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
  string s; cin >> s;
  int cnt_0 =0, cnt_1 = 0;
  for(char c : s){
        if (c == '1')cnt_1++;
        else cnt_0++;
  }
  printf("%d\n",abs(cnt_0 - cnt_1));
}

/*
void solve(){
        int x, y; cin >> x >> y;
        cout << x + y << '\n';
        cout << x * y << '\n';
}
int main() {
        int t; cin >> t;
        while(t--){
                solve();
        }
        return 0;
}*/