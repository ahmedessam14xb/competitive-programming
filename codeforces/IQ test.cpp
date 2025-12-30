// problem name: IQ test
// problem link: https://codeforces.com/contest/25/problem/A
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
	int n;
	cin >> n;
	int arr[n];
	int odd = 0, even = 0;
	int odd_pos = -1, even_pos = -1;
	ring(0, n) {
		cin >> arr[i];
		if (arr[i] % 2)
			odd++, odd_pos = i + 1;
		else
			even++, even_pos = i + 1;
	}
	if (even > odd)
		cout << odd_pos;
	else
		cout << even_pos;
	cout << '\n';
}
