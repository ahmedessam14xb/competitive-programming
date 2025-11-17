// problem name: Stones on the Table
// problem link: https://codeforces.com/contest/266/problem/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n ; cin >> n;
    string s ; cin >> s;
    int cnt = 0;
    for(int i = 0 ; i < s.size()-1; i++){
        if(s[i] == s[i+1]) cnt ++;
    }
    printf("%d\n",cnt); 
}
