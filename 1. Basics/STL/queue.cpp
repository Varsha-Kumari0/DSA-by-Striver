#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.emplace(5);

    q.back() += 5;  // 5+5 = 10
    cout << q.back() << endl;  // 10
    cout << q.front() << endl;  // 1
    q.pop();
    cout << q.size() << endl;   // 4
    cout << q.front() << endl;  // 2

    queue<int> q1, q2;
    q1.swap(q2);
    return 0;
}