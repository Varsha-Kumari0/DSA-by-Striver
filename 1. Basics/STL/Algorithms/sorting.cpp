#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {2, 5, 1, 10, 3, 5};
    vector<int> v;
    sort(arr, arr+6);
    for(auto it:arr) {
        cout << it << endl;
    }

    sort(arr, arr+6);
    sort(v.begin(), v.end());  // sort a vector

    sort(arr+2, arr+4); // sort only from a particular index
    // sort(arr, arr+6, greater<int>);  // sort in descending order
    return 0;
} 
