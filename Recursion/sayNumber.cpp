#include<iostream>
#include<string.h>
using namespace std;
void sayDigit(int n, string arr[]){
     if(n==0){
        return;
     }
     
     //processing part
     int digit = n%10;  // get digit
     n = n/10; // updating number
    
            /*
               cout<<arr[digit] <<" ";
              it will print in reverse 
            */


     //Recursive Call
     sayDigit(n, arr); 

    cout<<arr[digit] <<" ";

}
int main()
{
    string arr[10]={"zero","one", "two", "three", "four", "five","six", "seven", "eight", "nine"};
    
    cout<<"Enter Number: ";
    int n;
    cin>>n;

    cout<<endl<<endl<<endl;
    sayDigit(n,arr);
    cout<<endl<<endl<<endl;
 
    return 0;
}