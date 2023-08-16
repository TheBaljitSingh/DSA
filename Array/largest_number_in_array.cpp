#include<iostream>
using namespace std;
int main()
{
    int A[7]={2,4,7,8,10,9,5};
    int n=7, max;
    max = A[0];
    for(int i=1; i<7; i++){
    if(A[i]>max){
        max = A[i];
    }
    }
    cout<<"max. no is "<< max;

    return 0;
}