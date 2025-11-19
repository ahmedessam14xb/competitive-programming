// problem name: Is your horseshoe on the other hoof?
// problem link: https://codeforces.com/contest/228/problem/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    int s1, s2, s3, s4; cin >> s1 >> s2 >> s3 >> s4;
    set<int> sofInts;
    sofInts.insert(s1);
    sofInts.insert(s2);
    sofInts.insert(s3);
    sofInts.insert(s4);
    printf("%d\n",4 - sofInts.size());
}
