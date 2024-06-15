#include <bits/stdc++.h>
using namespace std;

int main()
{

    // MULTISET IS USED TO STORE SORTED VALUES
    // IT CAN STORE SAME VALUE

    multiset<int> ms;
    ms.insert(1); // {1}
    ms.insert(1); // {1, 1}
    ms.insert(1); // {1, 1, 1}

    ms.erase(1); // all 1's are erased as it erases the element

    int cnt = ms.count(1); // count no of 1's

    // ONLY A SINGLE 1 ERASED as it erases its address
    ms.erase(ms.find(1));

    // ms.erase(ms.find(1), ms.find(1)+2);
}