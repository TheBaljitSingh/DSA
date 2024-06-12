#include<iostream>
using namespace std;
#include<bits/stdc++.h>

int main(){
    // int n = 0;
    size_t n = 1000000;
    
    int* arr = new int[n];
    for(int i=1; i<=n; i++ ){
        arr[i]=i;
    }

    for(int i=1; i<=n; i++){
        cout<<arr[i];
    }
    delete[] arr;
    return  0;
}[]