 #include<iostream>
#include<vector>
using namespace std;

void merge(int arr1[], int n, int arr2[], int m, int arr3[]){
    int i=0; 
    int j=0; int k=0;
    while(i<n&&j<m){
        if(arr1[i]<arr2[j]){
            arr3[k++]=arr1[i++];
            
            
        }
        else{
            arr3[k++]=arr2[j++];
           

        }
    }
    //copy kardo first array ke element ko
    while(i<n){
        arr3[k++]=arr1[i++];
        
    }
    //copy karo second array ke element ko

    while(j<n){
        arr3[k++]=arr2[j++];   // arr3[] hoga ki arr2[] hoga???
        
    }

}


// void print(int arr3[], int o){

// }

void print(int ans[], int n){

    for(int i=0; i<n; i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int arr1[5]={1,3,5,7,9};
    int arr2[3]={2,4,6};
    int arr3[8]={0};

   merge(arr1, 5, arr2, 3, arr3);
   print(arr3, 8);

    return 0;
}


// merge loop another question from leet code
class Solution {
public:
 void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
     int i = m - 1, j = n - 1, k = m + n - 1;
     while(i >= 0 and j >= 0) {
         if(nums1[i] < nums2[j]) {
             nums1[k--] = nums2[j--];
         } else {
             nums1[k--] = nums1[i--];
         }
     }
     while(j >= 0) {
         nums1[k--] = nums2[j--];
     }
 }
};