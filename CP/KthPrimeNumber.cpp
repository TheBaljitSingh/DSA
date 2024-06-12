#include<iostream>
#include<bits/stdc++.h>
using namespace std;



int main(){
    int t;
    cin>>t;
    int n = 90000001;
    bool arr[n] ;
    while(t--){
        int k;
        cin>>k;
        
        // 0 ho to prime 
        // 1 ho to not prime
       
        arr[0] = arr[1] = true;

        for(int i=2; i*i<=n; i++){
            if(!arr[i]){

                for(int j=i*i; j<=n; j+=i){
                    arr[j]=true;

                }
            }
        }

        vector<int>primes;
        for(int i=2; i<=n; i++){
            if(!arr[i]){
                primes.push_back(i);
            }
        }

        cout<<primes[k-1]<<endl;

    }
    return 0;

}