// problem name: Gravity Flip
// problem link: https://codeforces.com/contest/405/problem/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n ; cin >> n;
    int arr[n];
    for(auto &i : arr){
        cin >> i;
    }
    sort(arr, arr+n);
    for(auto i : arr) printf("%d ",i);
    printf("\n");
}   

 
