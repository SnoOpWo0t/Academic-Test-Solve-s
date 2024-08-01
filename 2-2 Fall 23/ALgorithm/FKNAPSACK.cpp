#include<bits/stdc++.h>
using namespace std;
float GreedyKS(float capacity, int T[3][4], int i, int n) 
{
        if (capacity <= 0 || i > n)
        return 0;

    if (capacity < T[i][2]) 
    {
        float profit = capacity / T[i][2] * T[i][1];
        return profit;
    }
    return T[i][1] + GreedyKS(capacity - T[i][2], T, i + 1, n);
}
int main() {
    int T[3][4] = {
        // id, v, w, v/w
        {1, 60, 10},
        {2, 100, 20},
        {3, 120, 30}
    };
    float c = 50;  // C = bag capacity
    int n = sizeof(T) / sizeof(T[0]);
    float profit = GreedyKS(c, T, 0, n); 
    cout<<"profit "<<profit<<endl;     //0 is the starting index and 3 is the last index
    return 0;
}