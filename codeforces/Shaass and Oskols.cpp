// problem name: Shaass and Oskols
// problem link: https://codeforces.com/contest/294/problem/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n ; cin >> n;
    int arr[n];
    for(int &x : arr) cin >> x;
    int m ; cin >> m;
    while(m--){
        int x, y;
        cin >> x >> y;
        x--;
        if(x == 0){
            arr[1] += arr[0] - y;
            arr[0] = 0;
        }
        else if (x == n-1){
            arr[x-1] += y-1;
            arr[x] = 0;
        }
        else {
            arr[x-1] += y-1;
            arr[x+1] += arr[x] - y;
            arr[x] = 0;
        }
    }
    for(int x : arr) cout << x << '\n';
}