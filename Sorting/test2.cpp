#include<iostream>
using namespace std;

int calc(int n){

    if(n==1){
        return 2;
    }

    return 2*calc(n-1);


}


int main(){

    cout<<calc(8);


    return 0;
}