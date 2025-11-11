#include <iostream>
using namespace std;

void toLower(char word[], int n){
    for(int i = 0; i < n; i++){
        char ch = word[i];
        if(ch>='a' && ch<='z'){
            continue;
        } else {
            word[i] = ch - 'A' + 'a';
        }
    }
}

int main(){
    char word[] = "ApPLe";
    int n = 5;
    toLower(word, n);
    cout<< word << endl;
    return 0;

}