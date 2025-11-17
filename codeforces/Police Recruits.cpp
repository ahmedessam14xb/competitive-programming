// problem name: Police Recruits
// problem link: https://codeforces.com/contest/427/problem/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n ; cin >> n;
    int police = 0;
    int cnt = 0;   
    while(n--){
        int x; cin >> x;
        police += x;
        if(police < 0) cnt++, police = 0;
    }
    printf("%d\n",cnt);
}
