#include<iostream>
using namespace std;
int main()
{

  /*
    cout<<"address of first memory block is: "<<arr<<endl;
    cout<<&arr[0]<<endl;
    cout<<*arr+1<<endl;
    cout<<*(arr+1)<<endl;
    cout<<*(arr)+1<<endl<<endl;
    cout<<*(arr+3)<<endl;  // print value at 3rd index
    cout<<3[arr];

    
   int temp[10]={3,8,9};
   cout<<sizeof(temp)<<endl;
   cout<<sizeof(*temp)<<endl;
   cout<<sizeof(&temp)<<endl;



   
   int *ptr = &temp[0];

    cout<<sizeof(&temp)<<endl;
    cout<<sizeof(*temp)<<endl;


   cout<<sizeof(ptr)<<endl;
   cout<<sizeof(*ptr)<<endl;
   cout<<sizeof(&ptr)<<endl;
   cout<<sizeof(ptr)<<endl;

   

  int a[20] = {1,2,3,4};
  cout<<"--> "<<&a[0]<<endl;  //same
//   cout<<a<<endl;   //same
//   cout<<&a<<endl;//same

  int *p = &a[0];
//   cout<<p<<endl;
//   cout<<*p<<endl;
  cout<<"--> "<<&p<<endl;
  */
    int arr[10];
    //={4,25,18,17,11,14,55,16,13,14};

//ERROR
 //arr = arr+1;

 int *ptr = &arr[0];
  cout<<ptr<<endl;

 ptr = ptr+1;
 cout<<ptr<<endl; 






    return 0;
}