#include <iostream>
#include <climits>
using namespace std;
int linearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}
int binarySearch(int arr[], int n, int key)
{
    int s = 0;
    int e = n;
    while (s <= e)
    {
        int mid = (s + e) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    /*    int maxNo = INT_MIN;
        int minNo = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            maxNo = max(maxNo, arr[i]);
            minNo = min(minNo, arr[i]);
        }
        cout<<maxNo<<" "<<minNo; */

    /* Searching Of An Element in An Array */

    /*     int key;
        cin >> key;
        cout << linearSearch(arr, n, key) << endl; */

    /* Binary Search */

    /* int key;
    cin >> key;
    cout << binarySearch(arr, n, key) << endl; */

    
    return 0;
}