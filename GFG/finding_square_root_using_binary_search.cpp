#include<iostream>
using namespace std;

int sqrtInteger(int x){
    int s = 0;
    int e = x;
    long long int mid = s+(e-s)/2;
    long long int ans = -1;
        
    while(e>=s){
     if(mid*mid == x){
         return mid;
     }
     else if(mid*mid>x){
        e = mid -1;
        }
     else{
        ans = mid;
        s = mid+1;
        }
    mid = s+(e-s)/2; 
            
    }
    return ans;
}

double morePrecision(int n, int precision, int tempSol){

    double factor = 1;
    double ans = tempSol;
    for(int i=0; i<precision; i++){
        factor = factor/10;

        for(double j=ans; j*j<n; j=j+factor){
            ans = j;
            
        }
    }
    return ans;
}

int main()
{
    int n;
    cout<<"Enter the number "<<endl;
    cin>>n;
    int tempSol = sqrtInteger(n);
    cout<<"Answer is "<<morePrecision(n,3, tempSol)<<endl;
    return 0;
}


    