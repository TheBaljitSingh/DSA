#include<iostream>
#include <string>
using namespace std;


void print(int ar[], int n)
{
    

    for(int i =0; i<n; i=i+2){
        cout<<ar[i];
         
        
    }
    
    
}


int main()
{
    int ar[6]={1,2,3,4,7,5};

    cout<<"The alternate array are: "; print(ar, 6);

    return 0;
}