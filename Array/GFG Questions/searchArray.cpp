#include<iostream>
using namespace std;
bool isPresent(int arr[], int n, int m){

    for(int i=0; i<m;i++){
        if(arr[i]==n){
            return 1;
        }
    }
    return 0;

}

int main()
{
    
    //n = search element
    //m = size of array

    
    int n;
    cout<<"Enter the search key "<<endl;
    cin>>n;
    //taking input for search key in array

    int m;
    cout<<"Enter the size "<<endl;
    cin>>m;
    //taking input from user for size of array

    int* arr = new int[m];
    

    cout<<"Enter array elements "<<endl;
    for(int i=0; i<m; i++){
        cin>>arr[i];
    }


    int ans = isPresent(arr, n, m);

    cout<<" answer is " ;
    if(ans = 1){
        cout<<"True";
    }
    else{
        cout<<"False";
    }

    




    return 0;
}