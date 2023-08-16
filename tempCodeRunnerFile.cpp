#include<iostream>
using namespace std;
int print2largest(int arr[], int n) {
	    // code here
	    int max = arr[0];
	    for(int i=0; i<n; i++){
	        for(int j=0; j<n; j++){
	            
	            if(arr[i]>max){
	                max = arr[i];
	            }
	        }
	    }
        int max2= arr[0];
	    for(int i=0; i<n; i++){
	        for(int j=0; j<n; j++){
	            
	            if(arr[i]>max2 & arr[i]!=max ){
	                max2 = arr[i];
	            }
	        }
	    }
        cout<<max2;
	    
	    
	}

int main()
{
    int arr[]={12,35,1,10,34,1};
    print2largest(arr,6);
    return 0;
}