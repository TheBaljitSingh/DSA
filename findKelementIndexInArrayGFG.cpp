#include<iostream>
using namespace std;

int search(int arr[], int n, int k) {
	    // code here
	    for(int i=0; i<n; i++){
	        if(arr[i]==k){
	            return i+1;
	  	        }
	    }
	    return -1;
	    
	}
int main()
{
    int arr[7]={12,4,5,8,5,2,5};
    cout<<"array search answer is ";
    cout<<search(arr, 7,5);
    return 0;
}