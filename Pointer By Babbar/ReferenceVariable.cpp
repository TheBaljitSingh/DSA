#include<iostream>
using namespace std;

int* fun(int n){
    int* ptr = &n;
    return ptr;
}

int& func(int a){
    int num =a;
    int& ans = num;
    return ans;
}
void update(int n){
    n++;
}
void update2(int& n){
    n++;
}

int main()
{
    /*
    int i =5;

    //create a reference variable

    int &j =i;

    cout<<i<<"  ";
    i++;
    cout<<i<<"  "<<endl;
    j++;
    cout<<i<<endl;
    cout<<j<<endl;
    */

   int n =5;
   cout<<"Before "<<n<<endl;
//    int *ptr = &n;
   update(n);
    cout<<"After  "<<n<<endl;
   update2(n);
   cout<<"After "<<n<<endl;
    fun(n);
    // cout<<"all good"<<endl;
    return 0;
}