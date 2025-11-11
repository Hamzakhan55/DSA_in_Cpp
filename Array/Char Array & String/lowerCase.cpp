#include <iostream>
using namespace std;

void lowerCase(char word[], int n){
    for(int i=0; i<n; i++){
        char ch = word[i];
        if(ch>='A' && ch<='Z'){
            continue;
        }else{
            word[i] = ch - 'a' + 'A';
        }
    }
}

int main(){
    char word[] = "ApPlE";
    int n = 5;
    lowerCase(word, n);
    cout<<word<<endl;
    return 0;
}