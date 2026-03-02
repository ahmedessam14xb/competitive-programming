// problem name: King's Path
// problem link: https://codeforces.com/contest/242/problem/C
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

bool valid(pair<int,int> p){
  return (p.first >= 1 and p.first <= 1e9 and p.second >= 1 and p.second <= 1e9);
}
set<pair<int,int> > sofPairs;
bool allowed(pair<int,int> p){
  return (sofPairs.count(p));
}

int dx[8] = {1,1,1,-1,-1,-1,0,0};
int dy[8] = {1,0,-1,1,0,-1,1,-1};

set<pair<int,int> > visited;

void solve() {
  int x0, y0, x1, y1;
  cin >> x0 >> y0 >> x1 >> y1;
  pair<int,int> start = make_pair(x0, y0), 
  end = make_pair(x1, y1);
  int n ; cin >> n;
  sofPairs.insert(start);
  sofPairs.insert(end);
  while(n--){
    int r, a, b;
    cin >> r >> a >> b;
    ring(i, a, b+1){
      sofPairs.insert({r, i});
    }
  }

  queue<pair<int,int> > qu;
  qu.push(start);
  int depth = 0;
  int sz = 1;
  for(;!qu.empty() ;depth++ , sz = sz(qu)){
    while(sz--){
      pair<int,int> front = qu.front();
      qu.pop();

      // cout << front.first << " " << front.second << " test\n";

      if(visited.count(front)) continue;
      visited.insert(front);

      if(front == end){
        cout << depth << '\n'; return;
      }
      ring(i, 0, 8){
        pair<int,int> newPoint {front.first + dx[i], front.second + dy[i]};
        if(valid(newPoint) and allowed(newPoint)){
          qu.push(newPoint);
        }
      }

    }
  }
  cout << -1 << '\n';
}

int main() { solve(); }
