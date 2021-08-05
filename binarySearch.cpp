#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int n, int s)
{
    int high = n - 1, low = 0, mid;
    while (high >= low)
    {   
        mid = (low + high) / 2;
        if (arr[mid] == s)
        {
            return mid;
        }
        else if (arr[mid] < s)
        {
            low = mid + 1;
        }
        else if (arr[mid] > s)
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6}, s = 4;
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<binarySearch(arr,n,s)+1;
    return 0;
}