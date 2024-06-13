#include<bits/stdc++.h>
using namespace std;

int main() {
    // SET IS USED TO STORE SORTED AND UNIQUE VALUES

    set<int> st;
    st.insert(1);  // {1}
    st.insert(1);  // {1}
    st.emplace(5);  // {1, 5}
    st.insert(3);  // {1, 3, 5}
    st.insert(7);  // {1, 3, 5, 7}
    st.insert(4);  // {1, 3, 4, 5, 7}

    auto it = st.find(3);
    cout << *(it)<< endl;

    auto it2 = st.find(10);
    cout << *(it2) << endl;

    int cnt = st.count(1);  // 1 = ocuurence  0 = no occurence
    cout << cnt << endl;

    // ERASE
    auto itt = st.find(3);
    st.erase(itt);  // takes constant time

    auto itt2 = st.find(4);
    auto itt3 = st.find(7);  
    st.erase(itt2, itt3); // {1, 7}  [first, last)
      
    return 0;
}