#include <bits/stdc++.h>
using namespace std;

void mergeArray(vector<int> &arr, int si, int mid, int ei)
{
    vector<int> temp;
    int left = si;
    int right = mid + 1;

    while (left <= mid && right <= ei)
    {
        if(arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        }
        else {
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }
    while(right <= ei) {
        temp.push_back(arr[right]);
        right++;
    }

    for(int i=si; i<=ei; i++) {
        arr[i] = temp[i-si];
    }
}

void MergeSort(vector<int> &arr, int si, int ei)
{
    // BASE CASE
    if (si == ei)
    {
        return;
    }
    int mid = (si + ei) / 2;
    MergeSort(arr, si, mid);
    MergeSort(arr, mid + 1, ei);
    mergeArray(arr, si, mid, ei);
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int inp;
        cin >> inp;
        arr.push_back(inp);
    }

    MergeSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}