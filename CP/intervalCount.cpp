#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
    int n;
    long long int l, r;
    cin>>n>>l>>r;
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	//code here
    int sieve[r+1];
    for(int i=2; i<=r; i++){
        sieve[i] = 1;
    }
    sieve[0] = sieve[1] = 0;

    for(int i=0; i<n; i++){
        int check = arr[i];
        for(int j=check; j*j<=r; j++){ // j = 3
            if(sieve[j]){
                sieve[j]=0;
                for(int k=j*2; k<=r; k+=j){
                    sieve[k] = 0;
                }
            }
        }
    }
    int count = 0;
    for(int i=2; i<=r; i++){
        if(!sieve[i]){
            count++;
        }
    }
    
    cout<<count<<endl;
		
	}


    return 0;
}