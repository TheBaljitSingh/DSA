#include<iostream>
using namespace std;
int main()
{
    int row;
    cin>>row;

    int col;
    cin>>col;

    //creation a 2D Array
    int** arr = new int*[row];  //double pointer
    for(int i=0; i<row;i++){
        arr[i] = new int[col];
    }
    //creation done

    //taking input
    for(int i=0; i<row;i++){
        for(int j=0; j<col;j++){
            cin>>arr[i][j];
        }
    }

    //taking output
    cout<<endl;
    for(int i=0; i<row;i++){
    for(int j=0; j<col;j++){
         cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //releasing memory
    for(int i=0; i<row;i++){
        delete [] arr[i];
    } 

    delete []arr;

    //how to create a 2D array dynamically
    //input/output 
    //memory free kaise karni hai

    return 0;
}