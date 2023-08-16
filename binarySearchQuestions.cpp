#include<iostream>
using namespace std;
int rightOccurance(int arr[], int n, int k){
    int s=0, e=n-1;
    int mid = s + (e-s)/2;
    int ans =-1;
    while(s<=e){
        if(arr[mid]==k){
            ans = mid;
            s= mid+1; // left occurance dekh rahi hai isliye left me shift ho gye. right occurance ke liye alag se start ko shift karenge
        }
        else if(arr[mid]>k){
            e= mid-1;
        }
        else if(arr[mid]<k){
            s=mid+1;
        }
       mid = s + (e-s)/2;
    }
    return ans;
}
int leftOccurance(int arr[], int n, int k){
    int s=0, e=n-1;
    int mid = s + (e-s)/2;
    int ans =-1;
    while(s<=e){
        if(arr[mid]==k){
            ans = mid;
            e= mid-1; // left occurance dekh rahi hai isliye left me shift ho gye. right occurance ke liye alag se start ko shift karenge
        }
        else if(arr[mid]>k){
            e= mid-1;
        }
        else if(arr[mid]<k){
            s=mid+1;
        }
       mid = s + (e-s)/2;
    }
    return ans;
}
int main()
{
    int arr[5]={1,3,3,3,5};
    cout<<"Left most occurance of 3 at index is "<<leftOccurance(arr, 5, 4)<<endl;
    cout<<"Right most occurance of 3 at index is "<<rightOccurance(arr, 5, 3)<<endl;
    cout<<rightOccurance(arr, 5, 3)-leftOccurance(arr, 5, 3)+1;
    return 0;
}