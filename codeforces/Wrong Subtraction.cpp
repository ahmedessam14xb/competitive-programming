// problem name: Wrong Subtraction
// problem link: https://codeforces.com/problemset/problem/977/A
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
    int n , k ; cin >> n >> k;
    while(k){
        if(n % 10 == 0) n /= 10;
        else n--;
        k--;
    }
    printf("%d\n",n);
}

int main() { 
    solve(); }
