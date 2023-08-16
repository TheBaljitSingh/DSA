#include<iostream>
using namespace std;

void print(int n){

    //base case
    if(n==0){
        return;
    }
        cout<<n<<" ";
        print(n-1);

        // print(n-1);  // calling me different hoga
        // cout<<n<<" ";



}

int main()
{
    int n;
    cout<<"Enter number : ";
    cin >> n;

    print(n);

    return 0;
}