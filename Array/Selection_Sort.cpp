#include <iostream>
using namespace std;


void selectionSort(int *arr, int n){
    for(int i=0; i<n; i++){
      int minIndex = i;
        for (int j=i+1; j<n; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }

    for(int x=0; x<n; x++){
        cout<<arr[x]<<" ";
    }
}

int main(){
    int arr[5] = {5,3,4,1,2};
    int n = sizeof(arr)/sizeof(int);
    selectionSort(arr, n);
}