#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    vector<int>::iterator it1 = v.begin();   // points to 1
    vector<int>::iterator it2 = v.end();    // points to the memory location just after 5
    it1++;
    cout << *(it1) << endl;

    it2 = it2-2;
    cout << *(it2) << endl;

    // LOOP TO ITERATE THE VECTOR
    for(vector<int>::iterator it=v.begin(); it!=v.end(); it++) {
        cout << *(it) << endl;
    }

    for(auto it=v.begin(); it!=v.end(); it++) {
        cout << *(it) << endl;
    }

    for(auto it : v) {
        cout << it << endl;
    }

    // DELETE IN VECTOR
    // {1, 2, 3, 4, 5}
    v.erase(v.begin()+1);  // {1, 3, 4, 5}

    // {1, 3, 4, 5}
    v.erase(v.begin()+1, v.begin()+3);   // {1, 5}  [start, end)
    

    // INSERT IN VECTOR
    v.insert(v.begin(), 100);  // {100, 1, 5}
    v.insert(v.begin()+1, 2, 10);  //  {position at where to insert, no of times to insert, the number}
    // {100, 10, 10, 1, 5}
    

    // SIZE
    cout << v.size();

    // RETURNS THE LAST ELEMENT
    v.pop_back();

    // SWAP TWO VECTOR
    vector<int> v1 = {10, 20};
    vector<int> v2 = {40, 50};
    v1.swap(v2);    // v1 = {40, 50}  v2 = {10, 20}

    // CLEAR THE ENTIRE VECTOR
    v.clear();

    cout << v.empty() << endl;
} 
