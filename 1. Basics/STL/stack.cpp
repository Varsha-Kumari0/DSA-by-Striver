#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;
    st.push(5);
    st.push(4);
    st.push(3);
    st.push(2);
    st.emplace(1);

    cout << st.top() << endl;  // 1

    st.pop();
    cout << st.top() << endl;  // 2
    cout << st.size() << endl;  // 4
    cout << st.empty() << endl;  // 0

    stack<int> s1, s2;
    s1.swap(s2);
    return 0;
}