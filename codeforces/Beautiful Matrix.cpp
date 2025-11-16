// problem name: Beautiful Matrix
// problem link: https://codeforces.com/contest/263/problem/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    int row = 0, col = 0;
    for(int i = 0 ; i < 5 ; i++){
        for(int j = 0; j < 5 ; j++){
            int x; cin >> x;
            if(x == 1) row = i, col = j; 
        }
    }
    printf("%d\n",abs(2-row) + abs(2-col));
}   
