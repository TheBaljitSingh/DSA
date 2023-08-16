#include<iostream>
using namespace std;

void printArray(int arr[]   , int n){
    for(int i=0; i<n; i++){
        cout<<arr[i];
    }
}

 
/*  getting error while taking two retur value in swap function
int swapValue(int n1, int n2, int swp[]){
    int temp = n1;
    n1 = n2;
    n1 = temp;
    swp=n1,n2;
    return swp;


}
*/

void bubbleSort(int Arr[], int n){
    // int swp[];

    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(Arr[j]>Arr[j+1]){
                // swapValue(Arr[j],Arr[j+1], swp[]);
                 // this is for swapping the numbers
                int temp = Arr[j]; 
                Arr[j] = Arr[j+1];
                Arr[j+1] = temp; 
                
               
            }
        }
    }


}
int main()
{
    int Arr[5]={8,4,6,9,2};
    cout<<"Before Sorting the Array ";
    printArray(Arr,5);
    cout<<endl;
    cout<<"After Sorting the Array ";
    bubbleSort(Arr, 5);
    printArray(Arr,5);
    

    return 0;
}