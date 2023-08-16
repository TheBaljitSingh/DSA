#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5};
    char ch[6]="abcde";

    cout<<arr<<endl; // ye pahale location ke address print karta hai

    //pay attention
    cout<<ch<<endl;

    char *c = &ch[0];

    //PRINT ENTIRE STRING
    cout<<c<<endl;

    char temp = 'z';
    char *p1 = &temp;

    cout<<p1<<endl;

    return 0;
}