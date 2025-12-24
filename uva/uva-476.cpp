#include <bits/stdc++.h>
using namespace std;

int nxti() {
  int x;
  cin >> x;
  return x;
}
string nxts() {
  string x;
  cin >> x;
  return x;
}
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

struct point {
  double x, y;
  bool in_rec(point a, point b) {
    return (a.x < this->x and b.x > this->x and a.y > this->y and
            b.y < this->y);
  }
};

int main() {
  char input;
  vector<pair<point, point>> recs;
  while (true) {
    char r;
    cin >> r;
    if (r == '*')
      break;
    double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    point a = {x1, y1}, b = {x2, y2};
    recs.push_back({a, b});
  }
  vector<point> points;
  double x, y;
  while (cin >> x >> y and x != 9999.9 and y != 9999.9) {
    point p = {x, y};
    points.push_back(p);
  }
  for (int i = 0; i < points.size(); i++) {
    bool found_point = false;
    for (int j = 0; j < recs.size(); j++) {
      if (points[i].in_rec(recs[j].first, recs[j].second)) {
        printf("Point %d is contained in figure %d\n", i + 1, j + 1);
        found_point = true;
      }
    }
    if (!found_point)
      printf("Point %d is not contained in any figure\n", i + 1);
  }
}
