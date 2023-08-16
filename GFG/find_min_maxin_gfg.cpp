#include<iostream>
using namespace std;
void smallest(int arr[], int n){
    int min;

      for(int j =0; j<n; j++){
        
        if(arr[j]<arr[j++]){
            min = arr[j];
        }
        
    }
    cout<<min;
}

int main()
{   int arr[6]={3,2,1,56,10000,167};
     cout<<"the smallest element in array is ";
     smallest(arr, 6);
    return 0;
}