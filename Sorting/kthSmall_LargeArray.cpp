#include<iostream>
#include<algorithm>
using namespace std;
void kMax(int arr[], int n, int k){
    int max =arr[0];
   
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }

        }
        
        
    
    }
    cout<<k<<"th Max element is "<<arr[n-k]<<endl;
}

void kMin(int arr[], int n, int k){
    int min =arr[0];
   
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            if(min>arr[i]){
            min = arr[i];
             }

        }
        
        
    
    }
    cout<<k<<"th Min element is "<<arr[k-1]<<endl;  
    // not work for fing -ve index element 
}

int main()

{

    int arr[9]={1,2,3,4,5,9,6,33,19};

    //Kth Max element in Array
    cout<<"k is 3"<<endl;
    kMax(arr, 9, 3);
    kMin(arr, 9, 3);



    return 0;
}