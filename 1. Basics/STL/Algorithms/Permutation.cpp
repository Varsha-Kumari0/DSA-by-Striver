#include <bits/stdc++.h>
using namespace std;

int main() { 
    // CALCULATE ALL THE PERMUTATION 
    // BUT ONLY FOR SORTED
    string s="321";
    sort(s.begin(), s.end());

    do {
        cout << s << endl;
    } while(next_permutation(s.begin(), s.end()));
    return 0;
}