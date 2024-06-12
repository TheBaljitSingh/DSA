#include<iostream>
using namespace std;

long long fact(long long n){
    if(n==1 || n==0){
        return 1;
    }

    return n*fact(n-1);
}

int main(){
    long long n = 10;
    // cin>>n;

    cout<<fact(n);

    return 0;

}