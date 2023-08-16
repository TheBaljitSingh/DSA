#include<iostream>
#include <bits/stdc++.h>
using namespace std;

bool isPresent(int arr[][4], int target, int row, int col){
    
    for(int row =0; row<3;row++){
        for(int col =0; col<4;col++){

            if(arr[row][col]==target){
                return 1;
            }
        }
    }
    return 0;
}

//to print row wise sum
void rowWiseSum(int arr[][4], int row, int col ){
    cout<<"Printing Sum -> "<<endl;
    for(int row=0; row<3;row++){
        int RowSum=0;
        for(int col=0; col<4; col++){
            RowSum+=arr[row][col];
        }
        cout<<RowSum<<" ";
    }
    cout<<endl;
}

int largetsRowSum(int arr[][4], int row, int col){
    int maxi  = INT_MIN;
    int rowIndex = -1;

    for(int row=0; row<3;row++){
        int RowSum=0;
        for(int col=0; col<4; col++){
            RowSum+=arr[row][col];
        }
       if(RowSum>maxi){
        maxi = RowSum;
        rowIndex=row;
       }
    }
    cout<<"The maximum sum (in Row) is: "<<maxi<<endl;
    return rowIndex;

}

//to print col wise sum
void colWiseSum(int arr[][4], int row, int col ){
    cout<<"Printing Sum -> "<<endl;
    for(int col=0; col<4;col++){
        int colSum=0;
        for(int row=0; row<3; row++){
            colSum+=arr[row][col];
        }
        cout<<colSum<<" ";
    }
    cout<<endl;
}

int main()
{
    //create 2D array
    // int arr[3][4]={1,2,3,4,5,6,7,8,9,8,7,6};
    // int arr[3][4]={{1,11,111,111}, {2,22,222,2222}, {3,33,333,3333}};
    int arr[3][4];

    cout<<"Enter the elements "<<endl;
    //taking input  -> row wise input leta hai

    for(int row=0; row<3; row++){
        for(int col=0; col<4; col++){
            cin>>arr[row][col]; // ye index pe bata raha hai!
        }
    }

    /*

    //taking input  -> col wise input leta hai
    for(int col=0; col<4; col++){
        for(int row=0; row<3; row++){
            cin>>arr[row][col]; // ye index pe bata raha hai!
        }
    }
*/

    cout<<"Printing the Array"<<endl;
    //print row wise
    for(int row=0; row<3; row++){
        for(int col=0; col<4; col++){
            cout<<arr[row][col]<<" "; 
        }
        cout<<endl;
    }

/*    // print col wise
    for(int row=0; row<4; row++){
        for(int col=0; col<3; col++){
            cout<<arr[col][row]<<" "; 
        }
        cout<<endl;
    }
*/    

cout<<"Row wise sum: ";
rowWiseSum(arr, 3,4);
cout<<"Col wise sum: ";
colWiseSum(arr, 3,4);


int ansIndex = largetsRowSum(arr, 3,4);
cout<<"Max row is at index "<<ansIndex;
/*
cout<<"Enter the element to search "<<endl;
int target;
cin>>target;

if(isPresent(arr,target, 3,4)){
    cout<<"Bhi bhi Bhi elemnt mil gya "<<endl<<endl;

}
else{
    cout<<"sale dursa try kar ye nahi mila!"<<endl<<endl;
}
*/
    return 0;
}