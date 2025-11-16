// problem name: Boy and Girl
// problem link: https://codeforces.com/contest/236/problem/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s ; cin >> s;
    set<char> sofchars;
    for(auto ch : s){
        sofchars.insert(ch);  
    }
    if(sofchars.size() & 1) printf("IGNORE HIM!");
    else printf("CHAT WITH HER!");
}   
