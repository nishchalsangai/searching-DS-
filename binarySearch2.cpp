#include <bits/stdc++.h>

using namespace std;

int binarySearch(int low, int high, int arr[], int x)
{
    int mid = (high + low) / 2;
    if (high < low)
    {
        return -1;
    }
    else if (arr[mid] == x)
    {
        return mid + 1;
    }
    return arr[mid] < x ? binarySearch(mid + 1, high, arr, x) : binarySearch(low, mid - 1, arr, x);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 6;
    cout << binarySearch(0, n - 1, arr, x);
    return 0;
}
