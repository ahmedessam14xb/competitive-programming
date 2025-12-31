// problem name: Laptops
// problem link: https://codeforces.com/contest/456/problem/A
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

void solve() {
	int n;
	cin >> n;
	vector<vector<int>> arr;
	ring(0, n) {
		int x, y;
		cin >> x >> y;
		arr.push_back({x, y});
	}
	sort(all(arr), [](const vector<int>& v1, const vector<int>& v2) {
		if (v1[0] != v2[0]) return v1[0] < v2[0];
		return v1[1] < v2[1];
	});
	for (int i = 0; i < n - 1; i++) {
		if (arr[i][0] != arr[i + 1][0] and arr[i][1] > arr[i + 1][1]) {
			cout << "Happy Alex\n";
			return;
		}
	}
	cout << "Poor Alex\n";
}

int main() { solve(); }

// more simple solution
/*#include <bits/stdc++.h>
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

void solve() {
  int n ; cin >> n;
  int a[n], b[n];
  ring(0, n){
    cin >> a[i] >> b[i];
  }
  ring(0, n){
    if(a[i] != b[i]) {
      cout << "Happy Alex\n";
      return;
    }
  }
  cout << "Poor Alex\n";
}

int main() { solve(); }
*/
