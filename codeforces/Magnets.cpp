// problem name:  Magnets
// problem link: https://codeforces.com/contest/344/problem/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    char a_prev = '9';
    int cnt = 0;
    while(t--){
        char a, b ; cin >> a >> b;
        if(a != a_prev) cnt++;
        a_prev = a;
    }
    printf("%d\n",cnt);
}
