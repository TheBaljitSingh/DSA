#include<iostream>
using namespace std;
int main()
{
    /*
    float f = 10.5;
    float p = 2.5;
    float* ptr = &f;
    (*ptr)++;
   *ptr = p;
    cout<<*ptr<<" "<<f<<p;
    


   int *ptr =0;
   int a =10;
   *ptr = a;
   cout<<*ptr<<endl;

   
  int b =10;
  int *a = &b;
  cout<<a<<endl;  // address of a
  cout<<*a<<endl;  // value at address a
  cout<<&a<<endl;  //address of pointer
 

char ch = 'a';
char* ptr = &ch;
ch++;
cout<<*ptr<<endl;


 int a  =7;
 int *c = &a;
 *c = *c+1;
 cout<<a<<" "<<*c<<endl;


int a =7;
int *c = &a;
cout<<c<<endl;
c = c+3;
cout<<c<<endl;


int a[] = {1,2,3,4};
int *p=a++;
cout<<*p<<endl;


char b[]="xyz";
char *c = &b[0];
cout<<c<<endl;


char s[]= "hello";
char *p = s;
cout << s[0] << " " << p[0];


int first =8;
int second = 18; // ye 9 ho gya
int *ptr = &second;
*ptr = 9 ;
cout<<first<<" "<<second; 
  
  
 int first =6;
 int *p = &first;
 int *q =p;
 (*p)++;
 cout<<first<<endl;

int first =8;
int *p = &first;
cout<<(*p)++<<" ";
cout<<first<<endl;


int *p = 0;
int first = 110;
*p = first;  // segementation error
// p = &first;  // isme error nahi aayega
cout<<*p<<endl;


int first =8;
int second =11;
int *third = &second;
first = *third;
*third = *third +2;
cout<<first<<" "<<second<<endl;


float f =12.5;
float p =12.5;
float* ptr = &f;
(*ptr)++;
*ptr = p;
cout<<*ptr<<" "<<f<<" "<<p;


int arr[5];
int *ptr;
cout<<sizeof(arr)<<" "<<sizeof(ptr)<<endl;


int arr[]={11,21,13,14};
cout<<*(arr)<<" "<<*(arr+1)<<endl;

*/
int arr[6]={11,12,31};
// cout<<arr<<" "<<&arr<<endl;
// cout<<(arr+1)<<endl;
int *p = arr;
cout<<p[2]<<endl;









    return 0;
}