#include<iostream>
using namespace std;

void reverse(int arr[], int n){
    int start=0;
    int end = n-1;
    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


}
int main()
{
    /* <--------(1)printing sum of array
-->>>    // int sum =0;
    // // int arr[5]={2,7,1,-4,11};
    // //taking array input form user
    // cout<<"Enter array input"<<" ";
    // int arr[5];
    // for(int i=0; i<5; i++){
    //     cin>>arr[i];
    // }
    // //printing sum of array

    // for(int i=0; i<5; i++){
    //     sum = sum+arr[i];
    // }
    // cout<<"sum of array element is "<<sum<<" ";
    <<-------(1)printing sum of array------->

    */

    // (2)Reverse of an Array

    int arr[6]={1,2,3,-2,2,5};
    int brr[5]={3,5,-2,4,0};


    reverse(arr, 6);
    reverse(brr,5);             // same name kyu nahi ho shakta ?

    printArray(arr, 6);
    printArray(brr, 5);


    return 0;
}