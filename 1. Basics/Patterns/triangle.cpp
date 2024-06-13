#include <iostream>
using namespace std;

//         *
//       * * *
//     * * * * *
//   * * * * * * *
void print7(int n)
{
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j <= n - i - 1; j++)
        {
            cout << "  ";
        }
        // star
        for (int k = 0; k < (2 * i + 1); k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

//   * * * * * * *
//     * * * * *
//       * * *
//         *
void print8(int n)
{
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j <= i; j++)
        {
            cout << "  ";
        }
        // star
        for (int k = 0; k < 2 * (n - i) - 1; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

//         *
//       * * *
//     * * * * *
//   * * * * * * *
//   * * * * * * *
//     * * * * *
//       * * *
//         *
void print9(int n)
{
    print7(n);
    print8(n);
}

int main()
{
    int n;
    cin >> n;
    print9(n);
    return 0;
}