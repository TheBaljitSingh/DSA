#include<iostream>
// #include <algorithm>
using namespace std;
void reverseArray(int arr[], int n){
    int start = 0;
    int last =n-1;
    while(last>=start){
        
            // swap (arr[start],arr[last]);
            int temp = arr[start];
            arr[start]= arr[last];
            arr[last]= temp;
            
            start++;
            last--;
            
        
    }

    
}

int main()
{
    int arr[6]={1,2,3,4,5,6};
    
     //reverse the array

     reverseArray(arr, 6);
     for(int i=0; i<6; i++){
        cout<<arr[i]<<" ";
     }
    
    

    
    

    return 0;
}