#include<iostream>
using namespace std;

void sort( int arr[], int n){
    for(int i=0; i<n;i++){
        for(int j=0; j<n; j++){
            if(arr[j]<arr[i]){
                swap(arr[j], arr[i]);
            }


        }
    }
      cout<<arr[0]<<endl;
    for(int i =0; i<n; i++){
        cout<<arr[i] ;
    }
  
    

}

int main()
{   

    // sort an array by two pointer approach
    int arr[5]={3,5,8,1,2};
    sort(arr, 5);

    return 0;
}