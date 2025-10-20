#include <iostream>
using namespace std;

int func(int key, int *arr, int n){

    for(int i=0; i<n; i++){
        if(key == arr[i]){
            cout << i;
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[5] = {1,3,4,6,8};
    func(6, arr, 5);
}