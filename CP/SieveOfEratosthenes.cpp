// time complexity is nlog(long n)
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool checkPrime(int n){
    int cnt = 0;
    for(int i=1; i*i<=n; i++){
        if(n%i==0){
            cnt++;
            if((n/i)!=i){
                cnt++;
            }

        }
        if(cnt!=2){
            return false;
        }
    }
}
int N = 1000000;
bool sieve[1000001];
void createSieve(){
    for(int i=2; i<=N; i++){
        sieve[i] = true;
    }

    for(int i=2; i*i<=N; i++){
        if(sieve[i]==true){
            for(int j = i*i; j<=N; j+=i){
                sieve[j] = false;
            }
        }
    }
}

int main(){
    createSieve();
    int t; 
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        //here accessing arry it will take O(1) time complexity
        if(sieve[n]==true){
            cout<<"YES";
        }else{
            cout<<"NO";
        }
    }

    return 0;
}