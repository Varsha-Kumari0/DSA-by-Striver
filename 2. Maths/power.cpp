#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, pow;
    cin >> n >> pow;

    int power = pow;

    float res = 1; 
    while (n > 0)
    {
        if (pow % 2 != 0)
        {
            res *= n;
            pow--;
        }
        else
        {
            n *= n;
            pow /= 2;
        }
    }

if(power < 0) res = 1.0/res;
    cout << res << endl;
    return 0;
}

// TIME COMPLEXITY : 0(log n)
// SPACE COMPLEXITY : 0(1)