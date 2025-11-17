// problem name: Black Square
// problem link: https://codeforces.com/contest/431/problem/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    int a1, a2, a3, a4;
    cin >> a1 >> a2 >> a3 >> a4;
    int ans = 0;
    string s; cin >> s;
    for(char c : s){
        switch (c){
            case '1':
                ans += a1;
                break;
            case '2':
                ans += a2;
                break;
            case '3':
                ans += a3;
                break;
            case '4':
                ans += a4;
        }
    }
    printf("%d\n",ans);
}
