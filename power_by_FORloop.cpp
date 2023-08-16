#include<iostream>
using namespace std;
int main()
{
    //pow(a,b)
    int a,b;
    cout<<"enter a and b corespondelly \n";
    cin>>a;
    cin>>b;
    int ans = 1;
    for(int i =1; i<=b; i++){
        ans = ans*a;

    }
    cout<<"Answer is: "<<ans;
    return 0;
}