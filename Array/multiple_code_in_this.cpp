#include<iostream>
using namespace std;
int main()
{
    // int A[10]={2,4,6,8,12,3,5,7,9,11};
    // int sum = 0;
    // for(auto x:A)
    // sum = sum +x;
    // // for( int i=0; i<10; i++){
    // // sum = sum+A[i];
    
    // cout<<"sum of all element is "<<sum;
    // return 0;
    /*   new code */
    // for(int i=1; i<=5; i++){
    //     for(int j=1; j<=5; j++){
    //         cout<<"("<<i<<","<<j<<")" ;
    //     }
    //     cout<<endl;
    // }
    /*patter printing*/
    // int  count =1;

    // for(int i=1; i<5; i++){
    //     for(int j=1; j<5; j++){
    //         cout<<count++<<" ";
    //     }
    //     cout<<endl;
    // }

    /*pattern printing*/
    for(int i=0; i<7; i++){
        for(int j=0; j<7; j++){
            if(j>i){       // this is the main part of the pattern
                cout<<" ";
            }
            else 
            cout<<"*";
            
        }
        cout<<endl;
    }
}