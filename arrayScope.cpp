#include <iostream>
using namespace std;
void update(int arr[], int n)
{
    cout << endl
         << "INside the function" << endl;
    // updating the array's first elemnt
    arr[0] = 120;                  /*  Important thing in array,(agar array ko function me update karoge to original value bhi update ho jayegi) */
    // printin the array
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << endl
         << "Going back to main function" << endl;
}
int main()
{
    int arr[3] = {1, 2, 3};
    update(arr, 3);
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}