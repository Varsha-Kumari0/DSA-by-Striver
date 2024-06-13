#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int> pq;
    pq.push(10); // {10}
    pq.push(2);  // {10, 2}
    pq.push(33); // {33, 10, 2}
    pq.push(4);  // {33, 10, 4, 2}
    pq.emplace(52); // {52, 33, 10, 4, 2}

    cout << pq.top() << endl;  // 52
    pq.pop();
    cout << pq.size() << endl;   // 4
    cout << pq.top() << endl;  // 33

    // MINIMUM HEAP
    priority_queue<int, vector<int>, greater<int>> pq2;
    pq2.push(10); // {10}
    pq2.push(2);  // {2, 10}
    pq2.push(33); // {2, 10, 33}
    pq2.push(4);  // {2, 4, 10, 33}
    pq2.emplace(52); // {2, 4, 10, 33, 52}

    cout << pq2.top() << endl;  // 2
    pq2.pop();
    cout << pq2.size() << endl;   // 4
    cout << pq2.top() << endl;  // 4
    return 0;
}