#include<iostream>
using namespace std;

int fibo(int n){
    
    
    //base case
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    } 

    //recursive ralation
    int ans = fibo(n-1)+fibo(n-2);
   
    return ans;
     
   

}

int main()
{
    int n;
    cout<<"Enter number for find fibonacci ";
    cin>>n;

    fibo(n);
    return 0;
}