#include <bits/stdc++.h>
using namespace std;

int main() { 
    int arr[] = {2, 5, 3, 10, 55, 7, 88};
    int max = *max_element(arr, arr+7);
    cout << max << endl;

    int min = *min_element(arr, arr+7);
    cout << min << endl;
    return 0;
}