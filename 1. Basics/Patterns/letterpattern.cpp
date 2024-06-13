#include <iostream>
using namespace std;

// A
// A B
// A B C
// A B C D
// A B C D E
void print14(int n)
{
    for (int i = 0; i < n; i++)
    {
        char c = 'A';
        for (int j = 0; j <= i; j++)
        {
            cout << c++ << " ";
        }
        cout << endl;
    }
}

// A B C D E
// A B C D
// A B C
// A B
// A
void print15(int n)
{
    for (int i = 0; i < n; i++)
    {
        char c = 'A';
        for (int j = 0; j < n - i; j++)
        {
            cout << c++ << " ";
        }
        cout << endl;
    }
}

// A
// B B
// C C C
// D D D D
// E E E E E
void print16(int n)
{
    char c = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << c << " ";
        }
        c++;
        cout << endl;
    }
}

//     A
//    ABA
//   ABCBA
//  ABCDCBA
// ABCDEDCBA
void print17(int n)
{
    for (int i = 0; i < n; i++)
    {
        char c = 'A';
        for (int j = 0; j < n - i-1; j++)
        {
            cout << " ";
        }

        // characters
        int breakpoint = (2*i+1)/2;
        for(int j=1; j<=2*i+1; j++) {
            if(j<=breakpoint) 
                cout << c++;
            else
                cout << c--;
        }
        cout << endl;
    }
}

// E
// DE
// CDE
// BCDE
// ABCDE
void print18(int n) {
    char ch = 'A';
    ch = ch+n-1;

    for(int i=0; i<n;i++){
        char ch2 = ch-i;
        for(int j=0; j<=i; j++) {
            cout << ch2++;
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    print17(n);
    return 0;
}
