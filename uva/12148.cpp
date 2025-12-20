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

int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
bool isLeap(int year) {
  if (year % 4 == 0 and (year % 100 != 0 or year % 400 == 0))
    return true;
  return false;
}
bool same_next_day(int prev_day, int prev_month, int prev_year, int day,
                   int month, int year) {
  if (isLeap(year) and prev_day == 28 and prev_month == 2) {
    prev_day = 29;
  } else {
    if (prev_day == 29 and prev_month == 2)
      prev_day--;
    prev_day = (prev_day + 1) % months[prev_month - 1];
    if (!prev_day)
      prev_day = months[prev_month - 1];
    if (prev_day == 1) {
      if ((prev_month + 1) % 12 == 0)
        prev_month = 12;
      else
        prev_month = (prev_month + 1) % 12;
    }
    if (prev_day == prev_month and prev_month == 1)
      prev_year++;
  }
  /*cout << '\n' << prev_day << " " << prev_month << " " << prev_year << '\n';*/
  /*cout << day << " " << month << " " << year << '\n';*/
  return (prev_day == day and prev_month == month and prev_year == year);
}
int main() {
  /*freopen("input.txt", "r", stdin);
  freopen("outut.txt", "w", stdout);*/
  int t;
  while (cin >> t and t) {
    int prev_day, prev_month, prev_year, prev_consumption;
    cin >> prev_day >> prev_month >> prev_year >> prev_consumption;
    t--;
    int cnt = 0, ans = 0;
    while (t--) {
      int day, month, year, consumption;
      cin >> day >> month >> year >> consumption;
      if (same_next_day(prev_day, prev_month, prev_year, day, month, year)) {
        cnt++;
        ans += consumption - prev_consumption;
      }
      prev_day = day;
      prev_month = month;
      prev_year = year;
      prev_consumption = consumption;
    }
    cout << cnt << " " << ans << '\n';
  }
}
