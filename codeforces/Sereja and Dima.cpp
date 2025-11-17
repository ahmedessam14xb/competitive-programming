// problem name: Sereja and Dima
// problem link: https://codeforces.com/contest/381/problem/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n ; cin >> n;
    int arr[n]; 
    for(auto &x: arr) cin >> x;
    int left = 0, right = n-1;
    int ser = 0, dem = 0;
    bool ser_turn = true;
    while(left <= right){
        int mx = -1;
        if(arr[left] > arr[right]) {
            mx = arr[left];
            left ++;
        }
        else {
            mx = arr[right];
            right --;
        }
        if(ser_turn){
            ser += mx;
            ser_turn = !ser_turn;
        }
        else {
            dem += mx;
            ser_turn = !ser_turn;
        }
    }
    printf("%d %d\n", ser, dem);
}
