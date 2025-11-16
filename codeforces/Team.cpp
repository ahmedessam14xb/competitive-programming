// problem name: Team
// problem link: https://codeforces.com/contest/231/problem/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n ; cin >> n;
    int cnt = 0;
    while(n--){
        int a, b, c;
        cin >> a >> b >> c;
        if(a + b + c >= 2) cnt++;
    }
    printf("%d\n",cnt);
}   

 
