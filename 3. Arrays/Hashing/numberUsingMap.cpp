// FOR MAP
// TIME COMPLEXITY FOR STORING AND FETCHING IS log(n)
// best, average, worst all of them are log(n), n = no. of element in map

// FOR UNORDERED_MAP
// TIME COMPLEXITY FOR STORING AND FETCHING IS 0(1)
// best, average are 0(1)
// worst is 0(n), n = no. of element in map

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // precompute
    unordered_map<int, int> hash;
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }

    // iterate in the map
    for (auto it : hash)
    {
        cout << it.first << "->" << it.second << endl;
    }

    int q;
    cin >> q;
    while (q--)
    {
        int num;
        cin >> num;
        // fetch
        cout << hash[num] << endl;
    }
    return 0;
}
