#include <iostream>
using namespace std;

int sumRow(int nums[][3], int n, int m){
   int sum = 0;
        for (int j=0; j<m; j++){
            sum += nums[1][j];
        }
    cout<<"sum of number in the second row is = "<<sum<<endl;
    return sum;
    }

int main(){
    int nums[3][3] = {{1,4,9},
                    {11,4,3},
                    {2,2,3}};
    sumRow(nums, 3,3);
}