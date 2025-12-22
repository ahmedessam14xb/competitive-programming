// problem name: Is it rated?
// problem link: https://codeforces.com/contest/807/problem/A
#include <bits/stdc++.h>
using namespace std;

#define intmaxx INTMAX_MAX
#define intminn INTMAX_MIN
#define ll long long
#define ull unsigned long long
#define uint unsigned int
#define pb push_back
#define vci vector<int>
#define vcll vector<long long>
#define vcstr vector<string>
#define ring(a, b) for (int i = a; i < b; i++)

int main() {
	int n;
	cin >> n;
	int arr[n][2];
	bool rated = false;
	ring(0, n) {
		cin >> arr[i][0] >> arr[i][1];
		if (arr[i][0] != arr[i][1]) rated = true;
	}
	if (rated)
		cout << "rated\n";
	else {
		bool unrated = false;
		int minn = arr[0][1];
		ring(0, n) {
			minn = min(minn, arr[i][1]);
			if (minn != arr[i][1]) {
				unrated = true;
				break;
			}
		}
		if (unrated)
			cout << "unrated\n";
		else
			cout << "maybe\n";
	}
}
