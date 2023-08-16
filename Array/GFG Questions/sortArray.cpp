#include<iostream>
#include<algorithm>
using namespace std;
void sortArray(int arr[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                // swapValue(Arr[j],Arr[j+1], swp[]);
                 // this is for swapping the numbers
                // int temp = arr[j]; 
                // arr[j] = arr[j+1];
                // arr[j+1] = temp; 
                swap(arr[j],arr[j+1]);
                
               
            }
        }
    }

    
}

int main()
{
    int arr[6];

    for(int i=0; i<6; i++){
        cin>>arr[i];
    }

    sortArray(arr, 6);

    for(int i=0; i<6; i++){
        cout<<arr[i]<<" ";
    }


    
    return 0;
}