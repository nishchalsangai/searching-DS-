#include <bits/stdc++.h>
using namespace std;

int firstOccur(int arr[], int n, int x)
{
    int high = n - 1, low = 0, mid;
    while (high >= low)
    {
        mid = (high + low) / 2;
        if (arr[mid] > x)
            high = mid - 1;
        else if (arr[mid] < x)
            low = mid + 1;
        else
        {
            if (mid == 0 || arr[mid - 1] != arr[mid])
            {
                return mid;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    return -1;
}
int lastOccur(int arr[], int n, int x)
{
    int high = n - 1, low = 0, mid;
    while (high >= low)
    {
        mid = (high + low) / 2;
        if (arr[mid] > x)
            high = mid - 1;
        else if (arr[mid] < x)
            low = mid + 1;
        else
        {
            if (mid == n - 1 || arr[mid + 1] != arr[mid])
            {
                return mid;
            }
            else
            {
                low = mid + 1;
            }
        }
    }
    return -1;
}

int countTheOcc(int arr[], int n, int x)
{
    int first = firstOccur(arr, n, x);
    if (first == -1)
    {
        return 0;
    }
    return lastOccur(arr, n, x) - first + 1;
}
int main()
{
    int arr[] = {10, 20, 20, 20, 30, 40}, x = 20;
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << countTheOcc(arr, n, x);
    return 0;
}