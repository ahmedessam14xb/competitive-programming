// problem name: Buy a Shovel
// problem link: https://codeforces.com/contest/732/problem/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    int k, r; cin >> k >> r;
    int ans = 1;
    int sum = k;
    while(sum % 10 != 0 and (sum - r) % 10 != 0){
        sum += k;
        ans++;
    }
    printf("%d\n",ans);
}
