#include<iostream>
using namespace std;
void printArray(int arr[], int size){
    cout<<" printing the array"<<" "<<endl;
    for(int i=0; i<size; i++){
      cout<<arr[i]<<"  ";
    }
        cout<<endl<<" printing Done!"<<endl;

  }
int main(){
  
//   int arr[15]={2,7};
//   int n =3;
//   cout<<"printing the array";
//  //printing the arry
//  for(int i=0; i<=n; i++){
//    arr[i]=5;
//    cout<<arr[i];
//   }

// int arr[15]={ 2,7};
// int n=15;
// cout<<"printing the array"<<endl;
// //printing the array
// for(int i=0; i<n; i++){
//   cout<<arr[i]<<" ";
// }

int fourth[10]={1,7};
// int n =10;
printArray(fourth, 10);
// cout<<"printing the array"<<endl;
// //print the array
// for(int i=0; i<n; i++){
//    fourth[i]=1;
//    cout<<fourth[i]<<" ";
// }
  
  cout<<endl<<"Enerything is Fine"<<endl<<endl;

    
}
