#include <iostream>
using namespace std;

bool isPallindrome(char word[], int n){
    int st = 0;
    int end = n-1;
    while(st < end){
        if(word[st++] != word[end--]){
            cout<<word<<" is not pallindrome"<<endl;
            return false;
        }
    }
    cout << word<<" is Valid Pallindrome\n";
    return true;
}

int main(){
    char word[] = "maam";
    int n = 4;
    isPallindrome(word, n);
    return 0;
}