#include<iostream>
using namespace std;
bool checkPrime(int n) {
    
    for(int i=2; i*i<n; i++) {
        if(n%i == 0)
            return 0;
    }
    return 1;
}
int main() {
    int n;
    cin >> n;
    if(checkPrime(n))
        cout << "prime\n";
    else
        cout<< "not prime\n";
    return 0;
}