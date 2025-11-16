// problem name: Word
// problem link: https://codeforces.com/contest/59/problem/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    int upper = 0, lower = 0;
    for(auto x : s){
        if(isupper(x)) upper++;
        else lower++;
    }
    if(upper > lower) for(auto x : s) cout << char(toupper(x));
    else for(char &x : s) cout << char(tolower(x));   
}
