#include <iostream>
using namespace std;

int reverseNumber(int n)
{
    int revNum = 0;

    while (n > 0)
    {
        int ld = n % 10;
        n /= 10;
        revNum = revNum * 10 + ld;
    }
    return revNum;
}

int main()
{
    int n;
    cin >> n;

    int revNum = reverseNumber(n);

    if (n == revNum)
        cout << "true\n";
    else
        cout << "false\n";
    return 0;
}