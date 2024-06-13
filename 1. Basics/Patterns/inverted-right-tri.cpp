#include<iostream>
using namespace std;
// * * * * * 
// * * * * 
// * * * 
// * * 
// *
void print5(int n) {
    for(int i=n; i>0; i--) {
        for(int j=1; j<=i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}


// 1 2 3 4 5 
// 1 2 3 4 
// 1 2 3 
// 1 2 
// 1
void print6(int n) {
    for(int i=n; i>0; i--) {
        for(int j=1; j<=i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    print5(n);
    return 0;
}