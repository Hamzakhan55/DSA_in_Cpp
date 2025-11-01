#include <iostream>
using namespace std;

void insertionSort(int *arr, int n){
    for(int i=0; i<n; i++){
        int curr = arr[i];
        int prev = i-1;
        while(prev >= 0 && arr[prev] > curr){
            swap(arr[prev], arr[prev+1]);
            prev--;
        }
    }

    for(int x=0; x<n; x++){
    cout<<arr[x]<<" ";
    }
}



int main(){
    int arr[] = {5,3,4,1,2,8,12,19,11,20,23,21,29,30,21};
    int n = sizeof(arr)/sizeof(int);
    insertionSort(arr, n);
}