#include <iostream>
using namespace std;
const int numCoins = 5;//number of coins
int output[numCoins]; //array to store the number of coins used
int greedyCoinChange(int c[], int n, int i)  //c = coin array, n = amount of change needed, 
                                              //i = index of coin array
{ if (n == 0) {
        return 0;
    }
    if (i < numCoins && c[i] <= n) 
    {
        output[i]++;//usedCoin
        return 1 + greedyCoinChange(c, n - c[i], i); 
    } else {
        return greedyCoinChange(c, n, i + 1); 
    }
}

int main() {
   
    int c[numCoins] = {50, 25, 10, 5, 1};
    int n = 87; //n is the amount of change needed
    // output array to zeroes
    for (int i = 0; i < numCoins; i++) {
        output[i] = 0;
    }
    int result = greedyCoinChange(c, n, 0); //c = coin array, n = change needed, 0 = index of coin array
    cout << "Minimum number of coins needed: " << result << endl;
    cout << "Coins used:" << endl;
    for (int i = 0; i < numCoins; i++) {
        if (output[i] > 0) {
            cout << c[i] << " x " << output[i] << endl;
        }
    }
    return 0;
}
