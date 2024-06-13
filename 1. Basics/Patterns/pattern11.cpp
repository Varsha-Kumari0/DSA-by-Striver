#include<iostream>
using namespace std;

void print11(int n) {
    int num =1;
    for(int i=0;i<n;i++) {
        if(i%2 == 0) {
            num = 1;
        }
        else {
            num = 0;
        }
        for(int j=0; j<=i; j++) {
            cout << num << " ";
            num = 1 - num;
        }
        cout << endl;
    }
}
int main() {
    int n;
    cin >> n;
    print11(n);
    return 0;
}