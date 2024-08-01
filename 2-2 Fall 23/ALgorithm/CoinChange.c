#include <stdio.h>
#define numCoins 5
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
    int c[numCoins] = {50, 25, 10, 5, 1};
    int n = 87; // Amount to make change for

    // Initialize output array to zeroes for avoiding garbage values
    for (int i = 0; i < numCoins; i++) {
        output[i] = 0;
    }

    int result = greedyCoinChange(c, n, 0); //C = is the amount to make change for, T is the array of coins, 
                                            // 0 is the starting index
    printf("Minimum number of coins needed: %d\n", result);

    printf("Coins used:\n");
    for (int i = 0; i < numCoins; i++) {
        if (output[i] > 0) {
            printf("%d x %d\n", c[i], output[i]);
        }
    }
    
    return 0;
}
