#include<iostream>
using namespace std;

//checking sorted or not by using Recursion

//yeha pe array pointer hota hai { int *arr - ye bhi likh shakte ho}
bool isSorted(int *arr, int size){
   
    //base case
    if(size==0||size==1){
        return true;
    }
    if(arr[0]>arr[1]){  //sorted nahi hai
        return false;
    }
    else{
        bool returnRemaining = isSorted(arr+1,size-1);
        return returnRemaining;
    }

}

int sumofArray(int *arr, int size){

    //base case
    if(size==0){
        return 0;
    }
    if(size==1){
        return arr[0];
    }

    int remainingPart = sumofArray(arr+1, size-1);
    int sum  = arr[0] + remainingPart;
    return sum;

}

int main()
{
    int arr[2]={2,4};

    cout<<"is Sorted..."<<endl;
    bool ans = isSorted(arr,2);
    if(ans ==1 ){
        cout<<"array is sorted "<<endl;
    }
    else{
        cout<<"array is not sorted "<<endl;
    }

    cout<<"sum of array is: "<<sumofArray(arr,2);


    return 0;

}