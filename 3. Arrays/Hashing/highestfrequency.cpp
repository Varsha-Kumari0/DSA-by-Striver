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
    map<int, int> hash;
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }

    int highestFrequencyNum = 0;
    int max = 0;
    // iterate in the map
    for (auto it : hash)
    {
        if(it.second > max) {
            max = it.second;
            highestFrequencyNum = it.first;
        }
    }

    cout << highestFrequencyNum << "->" << max << endl;
    return 0;
}
