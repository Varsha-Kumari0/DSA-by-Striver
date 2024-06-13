#include <bits/stdc++.h>
using namespace std;

// COMPARATORS are self made comparator for special type of sorting

// sort it according to second element
// if second element is same, then sort
// it according to first element but in descending order
bool comp(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second < p2.second)
        return true;
    if (p1.second > p2.second)
        return false;

    // if they are same
    if (p1.first > p2.first)
        return true;
    else
        return false;
}
int main()
{
    pair<int, int> a[] = {{1, 2}, {2, 1}, {4, 1}};
    sort(a, a + 3, comp);
    // {4, 1}, {2, 1}, {1, 2}

    for(auto it:a) {
        cout << it.first << " " << it.second << endl;
    }
    return 0;
}
