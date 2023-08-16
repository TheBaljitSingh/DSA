#include<iostream>
using namespace std;
int main()
{

    int matrix[4][4]={{5,1,9,11},{2,4,8,10},{13,3,6,7},{15,14,12,16}};
    int row, col =4;

     for(int i=0; i<row; i++){
            for(int j=i; j<col; j++){
                if(i!=j){
                // swap(matrix[i][j], matrix[j][i]);
                int temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
                }
            }
        }
    

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}