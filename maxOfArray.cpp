#include<iostream>
#include<vector>
using namespace std;


// i have writed code for find second largest element in array using Vector(vector stack ke jaisa kam karta hai?)
int main()
{  int n=6;
   int arr[n] = {12, 35, 1, 10, 34, 1};
   int max= arr[0];
   
	    for(int i=0; i<n-1; i++){
	        if(arr[i]>max){
	            max = arr[i];
	            break;
	            // first max element is foun.
	        }
	        while(max<arr[i]){
	            int ans = arr[i];
                cout<<"ans is "<<ans;
	        }
	     }


       
    return 0;
}