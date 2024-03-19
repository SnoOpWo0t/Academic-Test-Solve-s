//Function Parameters: the function GreedyKS takes int T[3][4] as a parameter, 
//indicating an array of size 3x4, matching the size of the T array defined in the main function. 
 //In contrast, the second code uses int T[][4] as a parameter, which implies a flexible array size, 
 //but it's prone to errors if the actual size of the array doesn't match what the function expects.#include<stdio.h>
#include<stdio.h>
float GreedyKS(float c, int T[3][4], int i, int n) 
{
        if (c <= 0 || i > n)
        return 0;

    if (c < T[i][2]) {
        float p = c / T[i][2] * T[i][1];
        return p;
    }

    return T[i][1] + GreedyKS(c - T[i][2], T, i + 1, n);
}
int main() {
    int T[3][4] = {
        // id, v, w, v/w
        {1, 60, 10, 6},
        {2, 100, 20, 5},
        {3, 120, 30, 4}
    };
    float c = 50;  // C = bag capacity
    float profit = GreedyKS(c, T, 0, 3); // Note: n should be 3 for the given array, as indexing starts from 0
    printf("%f\n", profit);               //0 is the starting index and 3 is the last index
    return 0;
}


//TODO: Explain the code
/*
The line float profit = GreedyKS(c, T, 0, 3); 
in the code calls the GreedyKS function to solve the knapsack problem greedily. 
It passes the knapsack capacity c, the array of items T,
 the starting index 0 indicating the first item, and 3 as the last index (although it should be 2 for the third item). 
 The function calculates the maximum profit achievable and stores it in the variable profit.


*/
/*c: This is a float representing the capacity of the knapsack, i.e., the maximum weight it can hold.

T: This is a 2D array representing the items available for selection. Each row of the array T corresponds to an item, 
   and each column represents different attributes of the item. The columns are structured as follows:

Column 0: Item ID
Column 1: Value of the item
Column 2: Weight of the item
Column 3: Value-to-weight ratio of the item (value divided by weight)
0: This parameter i represents the index of the current item being considered. In this case, 
  it starts from 0, indicating that the function begins considering items from the first item in the array T.

3 : This parameter n represents the index of the last item in the array T.  (since indexing starts from 0), allowing the function to consider all 4 items.
The GreedyKS function implements a greedy algorithm to solve the knapsack problem. It recursively selects items based on their value-to-weight ratios, 
starting from the first item in the array T. It adds items to the knapsack until either the knapsack is full (i.e., its capacity c becomes zero or negative) or there are no more items to consider.
The function returns the total profit obtained by selecting items to fill the knapsack. This profit is stored in the variable profit, which is then printed using printf.
User
*/

/*#include<stdio.h>
float GreedyKS(float c, int T[i][4], int i, int n) 
{

  if (c<=0 || i>n) return 0;

  if (c < T[i][2])
  {
    float p = c/T[i][2] * T[i][1];
    return p;
  }

  return T[i][1] + GreedyKS(c-T[i][2], T, i+1, n);
}

int main()
{
    int T[3][4] = {
        //id, v, w, v/w
        {1, 60, 10, 6},
        {2, 100, 20, 5},
        {3, 120, 30, 4}
    };
    float c = 50;
    float profit = GreedyKS(c, T, 0, 2); // here n =2 which is excluding the last  item/index
    printf("%f\n", profit);
} */