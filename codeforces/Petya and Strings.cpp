// problem name: Petya and Strings
// problem link: https://codeforces.com/contest/112/problem/A
##include <bits/stdc++.h>
using namespace std;

int main(){
    string s, ss; cin >> s >> ss;
    for(int i = 0; i < s.size(); i++){
        s[i] = tolower(s[i]);
        ss[i] = tolower(ss[i]);
    }
    if(s < ss) printf("-1\n");
    else if (s > ss) printf("1\n");
    else printf("0\n");
}   

