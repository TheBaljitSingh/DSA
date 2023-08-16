#include<iostream>
#include <bits/stdc++.h>
using namespace std;
    

    //N = number of row
    //C = number of column





int main()
{


    int arr[3][3]={1,2,3,4,5,6,7,8,9};

    //Transpose tha matrix
    for(int i=0; i<3;i++){
        for(int j=i; j<3; j++){
            if(i!=j){
                int temp = arr[i][j];
                arr[i][j] = arr[j][i];
                arr[j][i]=temp;
            }
        }
    }

    // Now swap the column

    //N -> Number of Rows
    //C - Number of Columns

   




    



    return 0;
}