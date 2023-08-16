//Binary Search using Recursion
#include<iostream>
using namespace std;

void print(int arr[], int s, int e){
    for(int i=s; i<e; i++){
        cout<< arr[i]<<" ";
    } cout<< endl;
}
bool binarySearch(int *arr,int s, int e, int k){
    cout<<endl;
    print(arr, s, e);
    

    //base case
    //element is found
    if(s>e){
        return 0;
    }

    int mid = s + (e-s)/2;
    cout<<"value of arr mid is "<<arr[mid]<<endl;
    // base case me right or left part wale me check karo
   
    //element is not found
    if(arr[mid]==k){
         return true;
    }
    // else mid = k return false;
    else if(arr[mid]>k){
        return binarySearch(arr, s, mid-1, k);

    }
    else if(arr[mid]<k){
        return binarySearch(arr, mid+1, e, k);
    }
    

}
int main()
{

    int arr[5]={3,5,1,2,6};

    cout<<"Present or not "<<endl<<binarySearch(arr, 0, 5, 2);

    

    return 0;
}