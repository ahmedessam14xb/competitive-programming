// Problem name: Fourth Point !!
// Problem liink:
// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1183
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

int main() {
	double x1, y1;
	while (scanf("%lf %lf", &x1, &y1) != EOF) {
		double x2, y2, x3, y3, x4, y4;
		cin >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
		double vec1 = x2 - x1, vec2 = y2 - y1;
		double ans1 = (x4 - vec1) * 1000.0 / 1000.0;
		double ans2 = (y4 - vec2) * 1000.0 / 1000.0;
		if (x2 == x4 and y2 == y4) {
			ans1 = (x3 - vec1) * 1000.0 / 1000.0;
			ans2 = (y3 - vec2) * 1000.0 / 1000.0;
		} else if (x1 == x3 and y1 == y3) {
			ans1 = (x4 + vec1) * 1000.0 / 1000.0;
			ans2 = (y4 + vec2) * 1000.0 / 1000.0;
		} else if (x1 == x4 and y1 == y4) {
			ans1 = (x3 + vec1) * 1000.0 / 1000.0;
			ans2 = (y3 + vec2) * 1000.0 / 1000.0;
		} else {
			ans1 = (x4 - vec1) * 1000.0 / 1000.0;
			ans2 = (y4 - vec2) * 1000.0 / 1000.0;
		}
		printf("%.3lf %.3lf\n", ans1, ans2);
	}
}
