#include <iostream>
using namespace std;

const int numCoins = 5;
int output[numCoins];

int greedyCoinChange(int c[], int n, int i) {
    if (n == 0) {
        return 0;
    }
    if (i < numCoins && c[i] <= n) {
        output[i]++;
        return 1 + greedyCoinChange(c, n - c[i], i);
    } else {
        return greedyCoinChange(c, n, i + 1);
    }
}

int main() {
    int numCoins = 5;
    int c[numCoins] = {50, 25, 10, 5, 1};
    int n = 87;

    // Initialize output array to zeroes
    for (int i = 0; i < numCoins; i++) {
        output[i] = 0;
    }

    int result = greedyCoinChange(c, n, 0);

    cout << "Minimum number of coins needed: " << result << endl;

    cout << "Coins used:" << endl;
    for (int i = 0; i < numCoins; i++) {
        if (output[i] > 0) {
            cout << c[i] << " x " << output[i] << endl;
        }
    }

    return 0;
}
