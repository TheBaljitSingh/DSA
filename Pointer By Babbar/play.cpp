#include<iostream>
using namespace std;
int main(){

    // // pointer to int is created to some garbage address
    // int *p=0 ; 

    // cout<<*p<<endl;

    /*
    int i =5;
   
    int *q= &i;

    cout<<"address of q: "<<q<<endl;
    cout<<"value at q: "<<*q<<endl;

    int *p=0;
    // [*p = &i] aise nahi karna, [p = &i;] aise karna hai agar 0 se initialize kar diya hai pointer ko tab

    p = &i;

    cout<<"address: "<<p<<endl;
    cout<<"value: "<<*p<<endl;
    */
   /*
    int num = 5;

    cout<<num<<endl;

    int *p = &num;
    cout<<num<<endl;

    (*p)++;
    cout<<num<<endl;
    */
   // Now ek pointer se dusre pointer me copy karte hai
   
   int num = 5;
   int *p = &num;

   //copying a pointer
   int *q = p;
   cout<<p<<" - "<<q<<endl;
   cout<<*p<<" - "<<*q<<endl;


    // important concept
    int i =3;
    int *t = &i;
    // cout<< (*t)++ <<endl;
    *t = *t+1;
    cout<<*t<<endl;
     
    t = t+1;
     cout<<t<<endl;




    return 0;
}