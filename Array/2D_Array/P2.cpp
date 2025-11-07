#include <iostream>
using namespace std;


int findSeven(int matrix[][3], int n, int m){
        int key = 7;
        int count = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(matrix[i][j] == key){
                    count += 1;
                }
            }
        }
        cout<<"In this 2d array the count of 7's = " << count << endl;
    return 0;
}

int main(){
    int matrix[2][3] = {{4,7,8},
                    {8,8,7}};

    findSeven(matrix, 2,3);
}



// Question 1 : Print the number of all 7’s that are in the 2d array.
// output = In this 2d array the count of 7's = 2