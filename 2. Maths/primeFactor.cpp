#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    list<int> ls;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            ls.push_back(i);
            while(n%i == 0) {
                n /= i;
            }
        }
    }
    if(n!=1) {
        ls.push_back(n);
    }

    for(auto it: ls) {
        cout << it << " ";
    }
    return 0;
}

// TIME COMPLEXITY : 0(rootunder n*log n)