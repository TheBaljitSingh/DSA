#include<iostream>
using namespace std;
void solve(){
    int arr[] = {10,20,30,40, 50, 90};
    int *ptr1 = arr;
    ptr1++;
    int *ptr2 = arr+4;
    cout<<(*&*ptr2-*ptr1);
}

int main(){
    solve();

    return 0;
}