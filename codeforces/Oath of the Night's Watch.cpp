// problem name: Oath of the Night's Watch
// problem link: https://codeforces.com/contest/768/problem/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n ; cin >> n;
    long long arr[n];
    long long mx = -1, mn = 10e9;
    for(long long & x : arr){
        cin >> x;
        mx = max(mx, x);
        mn = min(mn, x);
    }
    long long cnt = 0;
    for(auto x : arr){
        if(x > mn && x < mx) cnt++;
    }
    printf("%lld\n", cnt);
}