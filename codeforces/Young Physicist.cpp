// problem name: Young Physicist
// problem link: https://codeforces.com/contest/69/problem/A
#include <bits/stdc++.h>
using namespace std;

#define intmaxx INTMAX_MAX
#define intminn INTMAX_MIN
#define ll long long
#define ull unsigned long long
#define uint unsigned int
#define pb push_back
#define vc vector<int>
#define vci vector<int>
#define vcll vector<long long>
#define vcstr vector<string>
#define ring(a, b) for (int i = a; i < b; i++)

int main() {
	int n;
	cin >> n;
	int sum_x = 0, sum_y = 0, sum_z = 0;
	while (n--) {
		int x, y, z;
		cin >> x >> y >> z;
		sum_x += x;
		sum_y += y;
		sum_z += z;
	}
	if (!sum_x && !sum_y && !sum_z) {
		printf("YES");
	} else
		printf("NO\n");
}
