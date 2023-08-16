#include<iostream>
using namespace std;

void print(int *arr, int n){
    cout<<"size of array is "<<n<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    } cout<<endl;
    
}
bool linearSearch(int *arr, int n, int k){

    //just printing the remaing the array
    print(arr, n);
    //base case
    if(n==0){
        return false;
    }

   //Recursion Relation 
    if(arr[0]==k){
        return true;
    }
    else{
        //baki ke part me check kar lo key hai ke nahi ? recursion ke madad se

        bool remainingPart = linearSearch(arr+1, n-1, k);
        return remainingPart;
    }

}
int main()
{

    int arr[5]={3,5,1,2,6};

    int ans =  linearSearch(arr, 5, 1);

    if(ans==true){
        cout<<"Key is Present "<<endl;
    }
    else{
        cout<<"Key is not present"<<endl;
    }

    return 0;
}