#include<bits/stdc++.h>
using namespace std;
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
    float profit = GreedyKS(c, T, 0, 3); 
    cout<<"profit "<<profit<<endl;     //0 is the starting index and 3 is the last index
    return 0;
}