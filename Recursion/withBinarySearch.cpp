#include<iostream>
#include <bits/stdc++.h>
using namespace std;

bool check(int *arr,int n){
    //base case
    if(n==0 || n ==1){
        return true ;
    }

    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool remainingPart = check(arr+1, n-1);
        return remainingPart;

    }

}
//homework questions
int doSum(int *arr, int n){
 
    if(n==0){ 
        return 0;   
    }
    if(n==1){
        return arr[0];
    } 
   

    int remainingPart =  doSum(arr+1, n-1);
    int ans = remainingPart+ arr[0];

    return ans;
}

void print(int* arr, int n){
    cout<<"the size of array is "<<n<<endl;

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
bool find(int* arr, int n, int k){
    print(arr,n);
    //base case
    if(n==0){//agar kuch nahi match kiya to uske liyea
        return false;
    }

    if(arr[0]==k){
        return true;
    }
    else{
         return find(arr+1, n-1, k);
    }

}

int binarySearch(int* arr, int s, int e, int k){
    //isme index kaise return karenge
    if(s>e){
        return -1;
    }
    int mid = (s+e)/2;

    if(arr[mid] == k){
        return mid;
    }
    if(arr[mid]<k){
        //go in right
        binarySearch(arr, mid+1, e, k);
    }
    else{
        binarySearch(arr, s, mid-1, k);
    }
}

int main(){

    int arr[6] = {2,4,6,10,14,16};
    cout<<"Enter key value "<<endl;
    int k;
    cin>>k;

    if(binarySearch(arr,0,5,k) == -1){
        cout<<"Element not found ";
    }else{
    cout<<"key found at index of "<<binarySearch(arr,0,5,k);
    }


    return 0;
}