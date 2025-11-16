// problem name: Light, more light
// problem link: https://onlinejudge.org/external/101/10110.pdf
#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n; 
    while(cin >> n && n != 0){
        if(sqrt(n) == (int)sqrt(n)){
            cout << "yes\n";
        }
        else cout << "no\n";
    }
}
