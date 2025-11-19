// problem name: 
// problem link: https://codeforces.com/contest/567/problem/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    long long arr[n];
    for(long long &x : arr) cin >> x;
    for(int i = 0 ; i < n ; i++){
        if(i == 0) cout << abs(arr[i] - arr[i+1]) << " " << abs(arr[i] - arr[n-1]) << '\n';
        else if (i == n-1) cout << abs(arr[n-1] - arr[n-2]) << " " << abs(arr[n-1] - arr[0]) << '\n';
        else {
            long long mn, mx;
            mn = min(abs(arr[i] - arr[i-1]), abs(arr[i] - arr[i+1]));
            mx = max(abs(arr[i] - arr[n-1]), abs(arr[i] - arr[0]));
            cout << mn << " " << mx << '\n';
        }
    }
}
