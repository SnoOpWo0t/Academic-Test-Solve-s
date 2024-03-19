#include <iostream>
using namespace std;

float GreedyKS(float c, int T[][4], int i, int n)
{
    if (c <= 0 || i > n)
        return 0;

    if (c < T[i][2])
    {
        float p = c / T[i][2] * T[i][1];
        return p;
    }

    return T[i][1] + GreedyKS(c - T[i][2], T, i + 1, n);
}

int main()
{
    int T[3][4] = {
        // id, v, w, v/w
        {1, 60, 10, 6},
        {2, 100, 20, 5},
        {3, 120, 30, 4}};
    float c = 50;
    float profit = GreedyKS(c, T, 0, 2); // Note: n should be 2 for the given array, as indexing starts from 0
    cout << profit << endl;
    return 0;
}
