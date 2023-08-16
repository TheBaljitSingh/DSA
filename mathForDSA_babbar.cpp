#include<iostream>
using namespace std;
// finding prime number or not

bool isPrime(int n){
    if(n<=1)
    return false;
    for(int i=2; i<n;i++){
        if(n%i==0){
            return false;
        }
        else{
            return true;
        }

    }
}

int main()
{
    // int n;
    // cin>>n;
    // if(isPrime(n)){
    //     cout<<"It is a Prime number"<<endl;
    // }
    // else{
    //     cout<<"It is not a Prime Number"<<endl;
    // }

   cout<<0%2<<endl<<1%2<<endl<<2%2;       // 0 1 0

    
    return 0;
}