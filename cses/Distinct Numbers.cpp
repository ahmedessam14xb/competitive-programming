// problem name: Distinct Numbers
// problem link: https://cses.fi/problemset/task/1621/
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
#define vcstr vector<string>
#define ring(a, b) for (int i = a; i < b; i++)
#define sz(n) (n).size()
#define ln puts("");

void solve() {
    int n ; cin >> n;
    set<int> nums;
    ring(0, n){
        int x; cin >> x;
        nums.insert(x);
    }
    cout << sz(nums) << '\n';
}

int main() { solve(); }
