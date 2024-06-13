#include<bits/stdc++.h>
using namespace std;
int main() {
    deque<int> dq;
    dq.push_back(2);  // {2}
    dq.emplace_back(4);  // {2, 4}

    dq.push_front(5);  // {5, 2, 4};
    dq.emplace_front(0);  // {0, 5, 2, 4}
    for(auto i: dq) {
        cout << i << endl;
    }

    dq.pop_back();
    dq.pop_front();
    cout << "After pop\n" ;
     for(auto i: dq) {
        cout << i << endl;
    }
    return 0;
}