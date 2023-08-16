// in binary search always keep array in increasing or decreasing order

#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    // int mid() = (start+end)/2;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        // go to right wale part me jayenge

        if (key > arr[mid])
        {
            start = mid + 1; // doubt hai ki iska index change kaise hoga samjho
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    } 

    return -1;
}

int main()
{
    // int even[6] = {2, 4, 6, 8, 12, 18};
    // int odd[5] = {3, 8, 11, 15, 17};
    // int evenIndex = binarySearch(even, 6, 6);
    // int oddIndex = binarySearch(odd, 5, 17);
    // cout << "Index of 6 is " << evenIndex << endl;
    // cout << "Index of 17 is " << oddIndex << endl;
    int arr[6] = {2, 4, 6, 8, 12, 18};
    cout<<"Enter key to find ";
    int k;
    cin>>k;
    int result = binarySearch(arr, 6, k);
    cout<<"Element is present at index "<<result;

    return 0;
}