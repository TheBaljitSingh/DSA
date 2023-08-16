#include<iostream>
// #include<algorithm>
using namespace std;
void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

void swap(int arr[], int start, int end, int d){
    int i, temp;
    for(int i=0; i<d; i++){
        temp = arr[start + end];
        arr[start + i] = arr[end+i];
        arr[end + i] = temp;
    }

}

void leftRotate(int arr[], int d, int n){

    // d=2, n=7

    // Base case for Recursive
    if(d==0 || d==n){
        return;
    }

    if(d>n){
        // return 1 or
        d = d % n;
    }
    
    //if it divide in equal part then
    if(n-d==d){
        swap(arr, 0, n-d, d);
        return;
    }

    // if A is sorter
    if(d<n-d){
        swap(arr, 0, n-d, d);
        // recursion call
        leftRotate(arr,d, n-d);
    }
    if(d>n-d){
        swap(arr, 0,d, n-d); //doubt how swap?
        //recursive call
        

    }


}



int main()
{
    int arr[7] = {1,2,3,4,5,6,7};

    leftRotate(arr, 2, 7);
    printArray(arr, 7);


    return 0;

}