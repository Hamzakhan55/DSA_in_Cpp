#include <iostream>
using namespace std;

int waterTrapping(int *height, int n){

    int leftMax[2000];
    leftMax[0] = height[0];
    int rightMax[2000];
    rightMax[n-1] = height[n-1];

    int trappedWater = 0;

    for (int i=1; i<n; i++){
        leftMax[i] = max(leftMax[i-1], height[i]);
    }

    for (int j=n-2; j>=0; j--){
        rightMax[j] = max(rightMax[j+1], height[j]);
    }

    for (int x=0; x<n; x++){
        int currentProfit = min(leftMax[x], rightMax[x]) - height[x];

        if (currentProfit > 0){
            trappedWater += currentProfit;
        }
    }

    cout<< "waterTrapped = " << trappedWater << endl;

    return trappedWater;

}

int main(){
    int height[] = {1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    int n = sizeof(height)/sizeof(int);

    waterTrapping(height, n);
}