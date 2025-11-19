#include <iostream>
using namespace std;

void reverse(char word[], int n){
    int st = 0;
    int end = n-1;
    while(st < end){
        swap(word[st], word[end]);
        st++;
        end--;
    }

    cout<<word<<endl;
}

int main(){
    char word[] = "Hamza";
    int n = 5;
    reverse(word, n);
    return 0;
}