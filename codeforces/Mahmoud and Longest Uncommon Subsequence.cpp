// problem name: Mahmoud and Longest Uncommon Subsequence
// problem link: https://codeforces.com/contest/766/problem/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s , ss;
    cin >> s >> ss;
    if(s == ss) printf("-1\n");
    else {
        cout << max(s.size(), ss.size()) << '\n';
    }
}
