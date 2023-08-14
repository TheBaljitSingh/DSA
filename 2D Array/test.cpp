#include<iostream>
#include <bits/stdc++.h> 
using namespace std;

int largestRowSum(int arr[][3], int row, int col){

    int maxi = INT_MIN;
    int rowIndex = -1;

    for(int row=0; row<3;row++){
        int sum = 0;
        for(int col = 0; col<3; col++){
            sum += arr[row][col];
        }

        if(sum>maxi){
            maxi = sum;
            rowIndex = row;
        }
    }

    cout<<"The maximum sum is "<<maxi<<"Row is "<<rowIndex;
}

void rowCol(int arr[][4], int nRow, int nCol){

    vector<int> ans;

        for(int col=0; col<nCol; col++){
            // For checking even number take & with 1
            if(col == 0 || col%2==0){
                //for even
                for(int row = 0; row<nRow; row++){
                    ans.push_back(arr[row][col]);
                }

            }

            if(col %2!=0){
                //for odd
                for(int row=nRow-1; row>=0; row--){
                    ans.push_back(arr[row][col]);
                }
            }
            
        }

    for(int i=0; i<(nRow*nCol); i++){
        cout<<ans[i]<<" ";
    }
}


int main(){

    // int arr[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16} };
    int arr[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    cout<<arr[0][1];
    // largestRowSum(arr,4,3);
    rowCol(arr,3,4);
  
// //column wise sum
//     for(int j=0; j<3; j++){
//         int ans = 0;
//         for(int i=0; i<3; i++){
//             ans+=arr[i][j];
//         }
//         cout<<ans<<endl;
//     } 




// //row wise sum
//     for(int i=0; i<4; i++){
//         int ans = 0;
//         for(int j=0; j<3; j++){
//             ans+=arr[i][j];
//         }
//         cout<<ans<<endl;
//     }


    return 0;
}
