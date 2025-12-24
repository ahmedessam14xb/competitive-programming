// Problem name: Overlapping Rectangles
// Problem Link:
// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=401
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
	int x, y;
	bool between(point a, point b) {
		return (this->x >= a.x and this->x <= b.x and this->y >= a.y and
			this->y <= b.y);
	}
};

struct rectangle {
	point p1, p2;
};

int main() {
	int t = nxti();
	while (t--) {
		int x11, y11, x12, y12;
		int x21, y21, x22, y22;
		cin >> x11 >> y11 >> x12 >> y12;
		cin >> x21 >> y21 >> x22 >> y22;
		rectangle rec1 = {point{x11, y11}, point{x12, y12}};
		rectangle rec2 = {point{x21, y21}, point{x22, y22}};

		point overlapping1, overlapping2;
		overlapping1 = {max(rec1.p1.x, rec2.p1.x),
				max(rec1.p1.y, rec2.p1.y)};
		overlapping2 = {min(rec1.p2.x, rec2.p2.x),
				min(rec1.p2.y, rec2.p2.y)};
		if (overlapping1.between(rec1.p1, rec1.p2) and
		    overlapping1.between(rec2.p1, rec2.p2) and
		    overlapping2.between(rec1.p1, rec1.p2) and
		    overlapping2.between(rec2.p1, rec2.p2)) {
			int area = (overlapping2.x - overlapping1.x) *
				   (overlapping2.y - overlapping1.y);
			if (!area)
				cout << "No Overlap\n";
			else {
				printf("%d %d %d %d\n", overlapping1.x,
				       overlapping1.y, overlapping2.x,
				       overlapping2.y);
			}
		} else {
			cout << "No Overlap\n";
		}
		if (t) cout << '\n';
	}
}
