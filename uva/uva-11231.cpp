// problem link: Black and white painting
// problem link: https://onlinejudge.org/external/112/11231.pdf
#include <bits/stdc++.h>
using namespace std;

int main(){
int x;
    int row, col, c;
    while(cin >> row >> col >> c){
        if(row == 0 and col == 0 and c == 0) break;
        row -= 7; col -= 7;
        cout << ((row * col) + c)/ 2 << '\n';
    }
}
