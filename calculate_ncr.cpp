//solve error
#include<iostream>
using namespace std;


    int ncr(int n, int r){
        int num = factorial(n);
        int denom = factorial(r)*factorial(n-r);
        return num/denom;

    }
    int factorial(int n){
        int fact =1;
        for(int i=1; i<=n; i++){
            fact = fact * i;
          }
        return fact;
    }
    int main()
{
        int n, r;
        cout<<"Enter n"<<endl;
        cin>>n;
        cout<<"Enter r"<<endl;
        cin>>r;
        cout<<"the answer is: "<<ncr(n,r);
    
    return 0;
}