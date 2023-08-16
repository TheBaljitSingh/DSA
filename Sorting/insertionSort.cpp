// just like card(taas) wala example
#include<iostream>
using namespace std;
void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i];
    }
}

//     Arr[]={8,4,1,5,9,2};
// https://youtu.be/wWhAhp6PIuQ refer this Anuj Bhiya video
void insertionSort(int arr[], int n){
    for(int i=1; i<n; i++){
        int temp = arr[i];
        int j = i-1;
        while(j >=0 && arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }

}




int main()
{
    int Arr[6]={8,4,1,5,9,2};
    cout<<"Before Sorting the Array ";
    printArray(Arr,6);
    cout<<endl;
    cout<<"After Sorting the Array ";
    insertionSort(Arr, 6);
    printArray(Arr,6);

    return 0;
}