// problem name: Colorful Stones (Simplified Edition)
// problem link: https://codeforces.com/contest/265/problem/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s, ss; cin >> s >> ss;
    int top = 0, down = 0;
    while(down < ss.size()){
        if(s[top] == ss[down]) top++;
        down++;
    }
    printf("%d\n",top+1);
}