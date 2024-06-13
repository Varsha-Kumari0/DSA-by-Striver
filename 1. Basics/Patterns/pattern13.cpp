#include<iostream>
using namespace std;

// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
// 11 12 13 14 15 
void print13(int n) {
    int index = 1;
    for (int i=0; i<n; i++) {
        for(int j=0; j<=i; j++) {
            cout << index++ << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    print13(n);
    return 0;
}