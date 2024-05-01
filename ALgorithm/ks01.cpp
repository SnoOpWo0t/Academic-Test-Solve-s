#include <bits/stdc++.h>
using namespace std;

float knapsackDP(int capacity, int items[][3], int n) {
    float dp[n + 1][capacity + 1]; 
   
    for (int i = 0; i <= n; ++i) 
    { 
        for (int w = 0; w <= capacity; ++w) 
        {
            if (i == 0 || w == 0) 
                dp[i][w] = 0;
            else if (items[i - 1][2] <= w) 
                dp[i][w] = max(dp[i - 1][w], dp[i - 1][w - items[i - 1][2]] + items[i - 1][1]);
            else
                dp[i][w] = dp[i - 1][w];
        } 
    }
    int w = capacity; //W =  remaining capacity
    cout << "Selected items (ID): ";
    for (int i = n; i > 0 && w > 0; --i)  // loop continues until either all items have been considered or the remaining capacity becomes zero.
    { 
        if (dp[i][w] != dp[i - 1][w]) { //If the value of the current item is not equal to the value of the previous item, 
        //current V != prev                         //it means that the current item is included in the knapsack.
            cout << items[i - 1][0] << " "; //prints the ID of the current item.
            w -= items[i - 1][2]; //updates the remaining capacity by subtracting the weight of the current item.
        }
    }
    cout << endl;
    return dp[n][capacity];
}

int main() {
    int items[][3] = { 
        {0, 10, 5},    
        {1, 60, 10},   
        {2, 100, 20},
        {3, 120, 30}   
  
    };
    int n = sizeof(items) / sizeof(items[0]); //item size/count
    int capacity = 50; 
    float maxProfit = knapsackDP(capacity, items, n); //function call with parameter capacity, itemsARRAY, and n (total item count)
    cout << "Maximum profit: " << maxProfit << endl;
    return 0;
}
 