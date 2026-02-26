// problem name: Remove Smallest
// problem link: https://codeforces.com/problemset/problem/1399/A
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
    int n ; cin >> n;
    int arr[n];
    ring(0,n) cin >> arr[i];
    sort(arr, arr+n);
    for(int i = 1; i < n; i++){
        if(arr[i] - arr[i-1] > 1) {
            cout << "NO\n";
            return ;
        }
    }
    cout << "YES\n";
}

int main() {
    int t; cin >> t;
    while(t--) solve();
}
