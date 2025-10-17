#include <iostream>
using namespace std;


void binToDec(int binNum){
    int n = binNum;
    int decNum = 0;
    int pow = 1;

    while (n > 0) {
        int lastDigit = n % 10;
        decNum = decNum + lastDigit * pow;
        pow = pow*2;
        n = n/10;
    }
    cout << decNum;
}

int main() {
    int n;
    cout<<"Enter binary number: ";
    cin>> n;
    binToDec(n);
    return 0;
}