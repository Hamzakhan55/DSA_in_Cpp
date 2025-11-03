#include <iostream>
using namespace std;

void spiralMatrix(int matrix[][4], int n, int m){
    int start_row = 0, start_column = 0;
    int end_row = n-1, end_column = m-1;
    while(start_row <= end_row && start_column <= end_column){

        // top
        for (int j=start_column; j<=end_column; j++){
            cout<<matrix[start_row][j]<<" ";
        }

        // right
        for (int i=start_row+1; i<=end_row; i++){
            cout<<matrix[i][end_column] << " ";
        }

        // bottom
        for (int j=end_column-1; j>=start_column; j--){
            if(start_row == end_row){
                break;
            }
            cout << matrix[end_row][j]<< " ";
        }

        // left
        for(int i=end_row-1; i>=start_row+1; i--){
           cout<< matrix[i][start_column] << " ";
        }

        start_row++; start_column++;
        end_row--; end_column--;
    }
        cout << endl;
}


int main(){
    int matrix[4][4] = {{1,2,3,4},
                        {5,6,7,8},
                        {9,10,11,12},
                        {13,14,15,16}};
    spiralMatrix(matrix, 4, 4);
}