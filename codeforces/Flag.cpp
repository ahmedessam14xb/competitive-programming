// problem name: Flag
// problem link: https://codeforces.com/contest/16/problem/A
#include <bits/stdc++.h>
using namespace std;

#define intmaxx INTMAX_MAX
#define intminn INTMAX_MIN
#define ll long long
#define ull unsigned long long
#define uint unsigned int
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define vci vector<int>
#define vcll vector<long long>
#define unmapii unordered_map<int, int>
#define unmapsi unordered_map<string, int>
#define vcstr vector<string>
#define ring(a, b) for (int i = a; i < b; i++)
#define sz(n) (n).size()
#define ln puts("");

void solve() {
    int n ,m ; cin >> n >> m;
    string arr[n];
    ring(0,n) cin >> arr[i];
    for(int i = 0 ; i < n ; i++){
        for(int j = 0; j < m-1 ; j++){
            if(arr[i][j] != arr[i][j+1]){
                cout << "NO\n"; return  ;
            }
        }
    }
    if(n > 1){
        for(int i = 0; i < n-1; i++){
            for(int j = 0 ; j < m ; j++){
                if(arr[i][j] == arr[i+1][j]) {
                    cout << "NO\n"; return;
                }
            }
        }
    }
    cout << "YES\n";
}

int main() { solve(); }
