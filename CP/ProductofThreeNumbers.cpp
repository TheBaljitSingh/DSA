#include<iostream>
using namespace std;
#include<bits/stdc++.h>

int main(){

    int t;
    cin>>t;
    
    while(t--){
        
        int n;
        cin>>n;
        int a =1 ,b=1 ,c=1;
        for(int i=2; i*i<=n; i++){
            if(n%i ==0){
                a = i;
                break;
            }
        }
        n = n/a;
        for(int i=2; i*i<=n; i++){
            if(n%i ==a){
                if(i!=a){
                    b = min(b,i);
                }
                if((n/i)!=i){
                    if((n/i)!=a){
                        b = min(b,n/i);
                    }
                }
            }
        }
        c= n/b;
        if(a!=b && b!=c && c!=1){
            cout<<"YES"<<endl;
            cout<<a<<" "<<b<<" "<<c<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}