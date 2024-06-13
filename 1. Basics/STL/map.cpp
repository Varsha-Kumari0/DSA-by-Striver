#include <bits/stdc++.h>
using namespace std;

int main()
{
    // MAP STORES UNIQUE KEY IN SORTED MANNER
    map<int, int> mp;
    map<int, pair<int, int>> mp2; // key = int, data = pair

    mp[1] = 2;         // {1, 2}
    mp.emplace(3, 1);  // {1, 2} {3, 1}
    mp.insert({2, 5}); // {1, 2} {2, 5} {3, 1}
    for (auto it : mp)
    {
        cout << it.first << " " << it.second << endl;
    }

// FIND DATA ON INDEX
    cout << mp[1] << endl; // 2
    cout << mp[5] << endl; // 0 or NULL

    // FIND INDEX FROM DATA
    auto it = mp.find(5);
    // cout << *(it).second << endl;

    auto it2 = mp.find(10); // points to mp.end()

    map<pair<int, int>, int> mp3; // key = pair, data = int
    mp3[{2, 3}] = 10;             // {{2, 3}, 10}
    return 0;
}