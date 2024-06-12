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

int arr[1000001];

void sieve(){
    int maxN = 1000000;

    for(int i=2; i<=maxN; i++){
        arr[i]=1;
        //mark all arry to 1
    }

    arr[0] = arr[1] = 0;// since 0 and 1 is not prime so we marked as 0

    for(int i=2; i*i<=maxN; i++){
        if(arr[i]){
            for(int j=i*i; j<=maxN; j+=i){
                arr[j]=0;
            }
        }
    }
}



using namespace std;
int main(){
    int n;
    cin>>n;
    cout<<isPrime(n);

    return 0;
}