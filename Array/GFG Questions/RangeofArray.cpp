#include<iostream>
#include<algorithm>
using namespace std;
int findRange(int arr[], int n){
    int min, max = arr[0];
    int range;
    for(int i=0; i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
        else if(arr[i]<min){
            min = arr[i];
        }
    }
    return range = max-min;
}

void moveNegativeLeftSide(int arr[], int n){
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n-i-1; j++){
    //         if(arr[j]>arr[j+1]){
    //             swap(arr[j],arr[j+1]);
    //         }
    //     }
    // }
    // sort(arr.begin(),arr.end());


}

int main()
{
    int arr[6]={-1, 3, -3, 47, 21, 91};
    
    cout<<"Range is: "<<findRange(arr, 6);

    cout<<"Move Negative Element";
    moveNegativeLeftSide(arr,6);


    for(int i=0; i<6; i++){
        cout<<arr[i]<<" ";

    }




    
    return 0;
}