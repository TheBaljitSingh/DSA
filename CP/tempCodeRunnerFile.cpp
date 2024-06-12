#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){

    if(b==0){
        return 0;
    }

    return gcd(b, a%b);


}

int main(){
    int a = 12;
    int b = 8;

    cout<<gcd(a,b);

    return 0;
}