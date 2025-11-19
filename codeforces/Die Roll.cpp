// problem name: Die Roll
// problem link: https://codeforces.com/contest/9/problem/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    int y, m ; cin >> y >> m;
    int ans = 6 - max(y,m) + 1;
    switch(ans){
        case 1:
        printf("1/6");
        break;
        case 2:
        printf("1/3");
        break;
        case 3:
        printf("1/2");
        break;
        case 4:
        printf("2/3");
        break;
        case 5:
        printf("5/6");
        break;
        case 6:
        printf("1/1");
        break;
        default:
        printf("0/1");
    }
    printf("\n");
}