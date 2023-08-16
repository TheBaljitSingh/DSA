#include<iostream>
using namespace std;

int firstOcc(int arr[], int n, int key){
    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans;
    while(s<=e){
        if(key == arr[mid]){
            ans = mid;
            e  = mid -1;
            // mil gya to iske left me dekh lo
        }
        else if(key>arr[mid]){
            s = mid+1;

        }
        else{
            e = mid-1;

        }
        mid = s + (e-s)/2;

    }
    return ans;
}

int lastOcc(int arr[], int n, int key){
    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans;
    while(s<=e){
        if(key == arr[mid]){
            ans = mid;
            s  = mid +1;
            // mil gya to iske left me dekh lo
        }
        else if(key>arr[mid]){
            s = mid+1;

        }
        else{
            e = mid-1;

        }
        mid = s + (e-s)/2;

    }
    return ans;

}


int main()
{

    int arr[] = {1,2,3,3,3,3,3,3,3,3,3,3,5};

    cout<<"First Occurance of 3 is at Index "<<firstOcc(arr,13,3)<<endl;
    cout<<"Last Occurance of 3 is at Index "<<lastOcc(arr,13,3);


    return 0;
}