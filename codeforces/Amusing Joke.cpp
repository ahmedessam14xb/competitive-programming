// problem name: Amusing Joke
// problem link: https://codeforces.com/problemset/problem/141/A
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
#define ring(i, a, b) for (int i = a; i < b; i++)
#define ring0(i, n) ring(i, 0, n)
#define dring(i, j, a, b) ring0(i, a) ring0(j, b)
#define sz(n) (n).size()
#define ln puts("");

void solve() {
    string first, second, pile;
    cin >> first >> second;
    cin >> pile;
    int arr1[26] = {0};
    int piles[26] = {0};
    ring(i, 0, sz(first)) {
        arr1[first[i] - 'A'] ++;
    }
    ring(i, 0, sz(second)) {
        arr1[second[i] - 'A'] ++;
    }
    ring(i, 0, sz(pile)) {
        piles[pile[i] - 'A'] ++;
    }
    ring(i , 0, 26){
        if(arr1[i] != piles[i]) {
            cout << "NO\n"; return;
        }
    }
    cout << "YES\n";
}

int main() { solve(); }
