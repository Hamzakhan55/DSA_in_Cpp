#include <iostream>
using namespace std;

int func(int *arr, int n, int key){
    int start = 0;
    int end = n-1;

    while(start <= end){
        int mid = (start + end)/2;
         if (arr[mid] == key){
                 return mid;
            }else if(arr[mid] < key){
                 start = mid + 1;
            }else{
                  end = mid -1;
            }
        }
    return -1;
    }

int main() {
    int arr[10] = {1,3,5,7,9,11,13,15,17,19};
    int n = sizeof(arr)/sizeof(int);
    int key = 2;
    cout<<func(arr, n, key)<<endl;
}