// problem name: Bear and Big Brother
// problem link: https://codeforces.com/contest/791/problem/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, h;
    cin >> n >> h;
    int ans = n;
    while(n--){
        int x; cin >> x;
        if(x > h) ans++;
    }
    cout << ans << '\n';
}
