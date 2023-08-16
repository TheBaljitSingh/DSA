#include<iostream>
using namespace std;
void print(int *p){
    cout<<p<<endl;  // address
    cout<<*p<<endl;  //value at that address

}
void update(int *p){
    // p = p+1;
    // cout<<"After "<<p<<endl;
    *p = *p+1;
    cout<<"printing in function "<<*p<<endl;
}

int getSum(int *arr, int n){  // {arr[] ya *arr} ye same hai
    cout<<endl<<"size :"<<sizeof(arr)<<endl;
    int sum =0;
    for(int i=0;i<n;i++){
         
        sum += i[arr];
    }
    return sum;


}
int main()
{
    /*
    int value =5 ;
    int *p = &value;
    // print(p);

    cout<<"Before "<<*p<<endl;
    update(p);
    cout<<"After "<<*p<<endl;
    */

    int arr[6]={1,2,3,4,5,6};

    cout<<"sum is "<<getSum(arr+2, 4)<<endl;
    return 0;
}