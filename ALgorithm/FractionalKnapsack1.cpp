//Function Parameters: the function GreedyKS takes int T[3][4] as a parameter, 
//indicating an array of size 3x4, matching the size of the T array defined in the main function. 
 //In contrast, the second code uses int T[][4] as a parameter, which implies a flexible array size, 
 //but it's prone to errors if the actual size of the array doesn't match what the function expects.#include<stdio.h
 #include <iostream>
using namespace std;
float GreedyKS(float c, int T[][4], int i, int n)
{
    if (c <= 0 || i > n)
        return 0;
    if (c < T[i][2]) //if the remaining capacity is less than the weight of the current item
    {
        float p = c / T[i][2] * T[i][1];
        return p; //P = profit (c/w * v)
    }

    return T[i][1] + GreedyKS(c - T[i][2], T, i + 1, n);//return the value of the current item plus the value of the next item
//c - T[i][2] is the remaining capacity after selecting the current item, and i + 1 is  next item's index, n is last index
}

int main()
{ //row is item and column is the id, value, weight, value/weight
// n = 3, c = 50
    int T[3][4] = { 
    //   0, 1, 2, 3
     // id, v, w, v/w
        {1, 60, 10, 6},
        {2, 100, 20, 5},
        {3, 120, 30, 4}};
    float c = 50;  //C = Bag capacity
    float profit = GreedyKS(c, T, 0, 3); // Note: n should be 3  as indexing starts from 0
    cout << profit << endl;         //0 is the starting index and 3 is the last index
    return 0;
}
/* 
float GreedyKS(float c, int T[][4], int i, int n): This is the declaration of a function named GreedyKS. 
It takes four parameters:
* c: A float representing the remaining capacity.
* T[][4]: A 2D array (matrix) representing the items. Each row contains an item’s ID, value, weight, and value-to-weight ratio.
* i: An integer representing the current item index.
* n: An integer representing the total number of items.
 4. // FUNCTION EXPLANATION :
 The GreedyKS function implements a greedy algorithm for the knapsack problem.
It calculates the maximum profit that can be obtained by selecting items with the highest value-to-weight ratio while staying within the given capacity c.
if the remaining capacity is less than the weight of the current item, it partially selects the item based on the remaining capacity.
The function recursively considers the next item and updates the remaining capacity.
The base case is when the remaining capacity is zero or all items have been considered.
5. int T[3][4] = {...}: This initializes a 2D array T with three rows and four columns. Each row represents an item, and the columns represent the item’s ID, value, weight, and value-to-weight ratio.
6. float c = 50;: This initializes a float variable c with the given capacity (50 in this case).
7. float profit = GreedyKS(c, T, 0, 2);: This calculates the maximum profit using the GreedyKS function. The initial item index is 0, and there are 3 items (so n is 2).
8. cout << profit << endl;: This prints the calculated profit to the console.
 */
//TODO: Explain the code
/*
The line float profit = GreedyKS(c, T, 0, 3); 
in the code calls the GreedyKS function to solve the knapsack problem greedily. 
It passes the knapsack capacity c, the array of items T,
 the starting index 0 indicating the first item, and 3 as the last index (although it should be 2 for the third item). 
 The function calculates the maximum profit achievable and stores it in the variable profit.


*/
/*
c: This is a float representing the capacity of the knapsack, i.e., the maximum weight it can hold.

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