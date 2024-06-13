#include <bits/stdc++.h>
using namespace std;

int noOfDigits(int n) {
    int count =0;

    while(n>0) {
        n /= 10;
        count++;
    }
    return count;
}

int findArmstrong(int n)
{
    int armstrong = 0;
    int digits = noOfDigits(n);
    while (n > 0)
    {
        int ld = n % 10;
        armstrong += pow(ld, digits);
        n /= 10;
    }

    return armstrong;
}

int main()
{
    int n;
    cin >> n;
    if(n == findArmstrong(n))
        cout << "true\n";
    else
        cout << "false\n";
    return 0;
}

// 371 = 3^3 + 7^3 + 1^3 = 371
// 1634 = 1^4 + 6^4 + 3^4 + 4^4 = 1634