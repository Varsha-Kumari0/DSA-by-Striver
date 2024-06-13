#include <bits/stdc++.h>
using namespace std;

int main() { 
    // POPCOUNT COUNTS ALL THE SET BITS AND RETURNS THE COUNT
    // At first it will convert the no into binary then count the set bits i.e., no of 1's

    int n = 7;
    int cnt = __builtin_popcount(n);
    cout << cnt << endl;

    long long n2 = 4784261291277;
    int cnt2 = __builtin_popcountll(n2);
    cout << cnt2 << endl;

    return 0; }