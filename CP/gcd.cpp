#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){

    if(b==0){
        return a;
    }

    return gcd(b, a%b);

    return a%b == 0 ? b : gcd (b, a%b);


}

int main(){
    int a = 60;
    int b = 12;

    cout<<gcd(a,b);

    return 0;
}