// when array/vector size is small the use this selection sorting method

#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i];
    }
}

void selectionSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int minIndex = i; // pahale se minIndex le liya(suppose that first element is minimum)
        for(int j=i+1; j<n; j++){  // loop chalaya check karne ke liyea ke isse chhota element koun hai
            if(arr[j]<arr[minIndex]){  // condition check kiya chhota hone ka
                minIndex=j;            // apna index update kiya, ki chhoti value ye hai then baad me swap ke code likha hai

            }
        }
        // swapping
    int temp = arr[minIndex];   // ye raha swapping ka code
    arr[minIndex] = arr[i];
    arr[i]= temp;

    }
}



int main()
{
    int Arr[5]={8,4,6,9,2};
    cout<<"Before Sorting the Array ";
    printArray(Arr,5);
    cout<<endl;
    cout<<"After Sorting the Array ";
    selectionSort(Arr, 5);
    printArray(Arr,5);

    return 0;
}