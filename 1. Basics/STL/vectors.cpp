#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v1;
    v1.push_back(1);    // pushes no into the vector
    v1.emplace_back(2); // does the same work as push_back but it is faster

    cout << v1[0] << endl << v1[1] << endl;  // print

    vector<pair<int, int>> v2;
    v2.push_back({2, 4});
    v2.emplace_back(3, 6);

    vector<int> v(5, 100); // {100, 100, 100, 100, 100}
    vector<int> vv(5); // {0, 0, 0, 0, 0} or garbage value

    vector<int> v11(5, 20);  // {20, 20, 20, 20, 20}
    vector<int> v22(v11); //copy of v1  {20, 20, 20, 20, 20}

    return 0;
}