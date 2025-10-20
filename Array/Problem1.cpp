// Find the largest in Array

#include <iostream>
using namespace std;

int main(){
    int arr[] = {3,7,13,5,10};
    int len = sizeof(arr) / sizeof(int);
    int max = 0;

    for (int i=0; i<len; i++){
        if (arr[i] > max){
            max = arr[i];
        }
    }
    
    cout<<"The largest number in array is : " << max;
    return 0;
}


// output
// The largest number in array is : 13