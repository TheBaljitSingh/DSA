#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void primeFactorization(int n){

    //brute force
    for(int i=2; i<=n; i++){
        if(n%i==0){
            int cnt = 0;
            while(n%i==0){
                cnt++;
                n/=i;
            }
            cout<<i<<" ^ "<<cnt<< " | ";
        }
    }

}

void primeFactorization2(int n){
    for(int i=2; i<=n; i++){
        if(n%i==0){
            int cnt = 0;
            while(n%i==0){
                cnt++;
                n/=i;
            }
            cout<<i<<" "<<cnt<<endl;
        }
        if(n>1){
            cout<<n<<" "<<1<<endl;
        }
    }
}

int main(){
    int n=0;
    cin>>n;
    primeFactorization(n);
    return 0;
}
