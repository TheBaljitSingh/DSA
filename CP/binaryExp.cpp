#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int power(int base, int n){
    //brute force
    int res = 1;
    for(int i=1; i<=n; i++){
        res*=base;
    }
    return base;
}

int power2(int a, int n){
    int res = 1;
    while(n){
        
        //check for odd or even

        if(n%2){
            res*=a;
            n--;
        }else{
            a*=a;
            n/=2;
        }
    }
    return res;
}

//this is modular exponsentition
int power3(int a, int n, int p){
    //here p is prime number
    int res = 1;
    while(n){
        if(n%2){
            res = (res*a)%p;
            n--;

        }else{
            a = (a*a)%p;
            n/=2;
        }
    }
    return res;
}

int main(){
    int base= 4;
    int n = 2;

    
    cout<<power2(base, n);
    return 0;
}
