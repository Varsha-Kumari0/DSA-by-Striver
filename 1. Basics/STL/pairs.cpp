#include <bits/stdc++.h>
using namespace std;
int main()
{
    pair<int, int> p = {2, 3};
    cout << p.first << " " << p.second << endl;

    pair<int, pair<int, float>> p2 = {2, {3, 4.5}};
    cout << p2.first << " " << p2.second.second << " " << p2.second.first << endl;

    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
    cout << arr[1].second << endl;
    return 0;
}