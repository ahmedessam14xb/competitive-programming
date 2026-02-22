// problem name: BookWorm
// problem link: https://acm.timus.ru/problem.aspx?space=1&num=1638
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
#define ring(a, b) for (int i = a; i < b; i++)
#define sz(n) (n).size()
#define ln puts("");

void solve() {
	ll book_size, book_cover, start, end;
	cin >> book_size >> book_cover >> start >> end;
	ll ans = (abs(start - end) - 1) * (book_size + 2 * book_cover);
	if (start == end)
		ans = book_size;
	else if (start < end)
		ans += 2 * book_cover;
	else
		ans += (2 * book_cover + 2 * book_size);

	printf("%lld\n", ans);
}

int main() { solve(); }
