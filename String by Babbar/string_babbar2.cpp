#include<iostream>
using namespace std;
int main()
{
    // string str="Babbar";
    // cout<<str<<endl;
    // cout<<str.length()<<endl;
    // str.pop_back();
    // str.push_back('c');
    // cout<<str;
    char arr1[6]={'a','b','\0','c','d'};
    
    
    string arr2= "ab\0cd\0";
    cout<<arr2<<endl;
    for (int i =0; i<6; i++){
        cout<<arr1[i];
    }

    return 0;
}