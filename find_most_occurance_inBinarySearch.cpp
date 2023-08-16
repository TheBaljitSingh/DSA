#include<iostream>
using namespace std;
int firstOcc(int arr[], int n, int k ){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e){
        if(arr[mid]==k){
            ans = mid;
            e= mid -1;
        }

         else if(arr[mid]<k){    // right me jao
            s = mid+1;
        }

        else if(arr[mid]>k){     // left me jao
            e = mid -1;

        }
       
        mid = s + (e-s)/2;
    }
    return ans;




}
int lastOcc(int arr[], int n, int k ){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e){
        if(arr[mid]==k){
            ans = mid;
            s= mid +1;
        }

         else if(arr[mid]<k){    // right me jao
            s = mid+1;
        }

        else if(arr[mid]>k){     // left me jao
            e = mid -1;

        }
       
        mid = s + (e-s)/2;
    }
    return ans;

}



int main()
{


    int arr[11]={1,2,3,3,3,3,3,3,3,3,5};
    cout<<"First Occurance of 3 at index of : "<<firstOcc(arr, 11, 3)<<endl;
    cout<<"Last Occurance of 3 at index of : "<<lastOcc(arr, 11, 3);

    
    // method for finding total no of occurance of 3(key)
    // int totalno=0;     
    // for(int i=firstOcc(arr,11,3); i<=lastOcc(arr,11,3); i++){
    //     totalno = totalno+1;

    // }
    // cout<<endl<<totalno;
    // this is best method for this
 int Total_no_of_occ = (lastOcc(arr, 11, 3) - firstOcc(arr, 11, 3)) + 1;
 cout<<endl<<"Total no of occurance of "<< "3 is :"<< Total_no_of_occ;


    return 0;
}
