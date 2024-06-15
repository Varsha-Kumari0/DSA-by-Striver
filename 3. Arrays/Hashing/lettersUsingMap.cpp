#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    // precompute
    map<char, int> hash;
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i]]++;
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
        char ch;
        cin >> ch;
        // fetch
        cout << hash[ch] << endl;
    }
    return 0;
}