#include<iostream>
#include<bits/stdc++.h>
bool isPrime(int n){
    if(n==1){
        return false;
    }
    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            return false;
        }
    }

    return true;
}

using namespace std;
int main(){
    int n;
    cin>>n;
    cout<<isPrime(n);

    return 0;
}