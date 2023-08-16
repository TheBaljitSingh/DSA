#include<iostream>
using namespace std;

void findMax(int arr[], int n){
     int max =arr[0];
   
    for(int i=0; i<n; i++){
        
        if(max<arr[i]){
            max = arr[i];
        }
        
    
    }
    cout<<"Max element is "<<max<<endl;

}
void findMin(int arr[], int n){
    int min =arr[0];
    for(int i=0; i<n; i++){
         
        if(min>arr[i]){
            min = arr[i];
        }
        
    
    }
    cout<<"Min element is "<<min<<endl;

}
int main()
{
    int arr[5]={1,5,3,4,0};
     
     //find min ans max elemnt in array
    
    findMax(arr, 5);
    findMin(arr,5);

    return 0;
}