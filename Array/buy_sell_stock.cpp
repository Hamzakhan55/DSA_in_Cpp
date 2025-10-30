#include <iostream>
using namespace std;

void buySellStock(int *prices, int n){

    int bestBuy[100000];
    bestBuy[0] = INT_MAX;

    for(int i = 1; i < n; i++){
        bestBuy[i] = min(bestBuy[i-1], prices[i-1]);
    }

    int maxProfit;
    for(int i = 0; i < n; i++) {
        int currentProfit = prices[i] - bestBuy[i];
        maxProfit = max(currentProfit, maxProfit);
    }

    cout << "MaxProfit is " << maxProfit << endl;


}

int main(){

    int prices[6] = {10,5,12,8,21};
    int n = sizeof(prices)/sizeof(int);

    buySellStock(prices, n);
}