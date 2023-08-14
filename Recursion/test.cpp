#include<iostream>
#include <bits/stdc++.h>
#include<string>
using namespace std;

void printName(int i, int n){
    //base case
    
    if(i>n){
        return;
    }
    
    cout<<"Baljit"<<" ";
    printName(i+1, n);

}

void printToN(int n){

    if(n==0){
        return ;
    }
    cout<<n<<" ";
    printToN(n-1);
}

int sum(int n){ 
    if(n==0){
        return 0;
    }
    return n+sum(n-1);
}
int fact(int n){
    if(n==1){
        return 1;
    }
    return n*fact(n-1);
}

void f(int arr[], int i, int n ){

  //base case
  if(i>=n/2){
    return;
  }

  swap(arr[i], arr[n-i-1]);
  f(arr,i+1, n);
}
bool checkPalindorm(string s, int i, int l){
    //base case
    if(i>l){
        return true;
        
    }
    if(s[i]!=s[l]){
        return false;
    }else{
        //if not equal return false;
        return checkPalindorm(s,i+1, l-1);

        
    }
    


}


int main(){


    string s = "FMADAML";

    cout<<checkPalindorm(s, 0, 6);


    // int arr[5] = {1,2,3,4,2};
    // f(arr,0,5);
    // for(int i=0; i<5; i++){
    //     cout<<arr[i]<<" ";
    // }
    

    // print name n times
    // cout<<"Enter number ";
    // int n;
    // cin>>n;
    // // printName(1,n);
    // // printToN(n);
    // cout<<fact(n)<<endl;




    return 0;
}