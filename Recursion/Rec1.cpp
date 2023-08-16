#include<iostream>
using namespace std;

int factorial(int n){
 
    //base case
    if(n==0){
        return 1;
    }

    return n*factorial(n-1);

}

 int power(int n){

    //base case
    if(n==0){
        return 1;
    }

    //recursive relation
    // int smallProblem = power(n-1);
    // int biggerProblem = 2*smallProblem;

    // return biggerProblem;


    return 2*power(n-1);
 }

int main()
{
    int n;
    cout<<"Enter number n: ";
    cin >> n;

    int ans  = factorial(n);

    cout <<"Factorial is: "<< ans<<endl;

    int ans2 = power(n);

    cout <<"Power is: " << ans2;

    return 0;
}