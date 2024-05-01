#include<stdio.h>
#define N 28

int isAttacking(int chess[N][N], int row, int col)
{
    for(int j=0; j<=col; j++)
    {
        if(chess[row][j]==1) return 1;
    }
    for(int i = row, j = col; i>=0 && j>=0; i--, j--) // parallel to principle diagonal
    {
        if(chess[i][j]==1) return 1;
    }
    for(int i=row, j = col; i<=N && j>=0; i++, j--) // parallel to secondary diagonal
    {
        if(chess[i][j]==1) return 1;
    }
    return 0;
}

int solveQueen(int chess[N][N], int col)
{
    if(col>=N) return 1; // solved
    for(int i=0; i<N; i++) // row
    {
        if(!isAttacking(chess, i, col))
        {
            chess[i][col] = 1;

            if(solveQueen(chess, col+1)==1)
            {
                return 1;
            }
            else
            {
                chess[i][col] = 0; // backtracking
            }
        }    
    }
    return 0;
}
void printBoard(int chess[N][N])
{
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
            if(chess[i][j]==1)
                printf("Q ");
            else 
                printf(". ");
        }
        printf("\n");
    }
}
int main()
{
    int chess[N][N] = {0};
    int solve = solveQueen(chess, 0);
    if(solve)
        printBoard(chess);
    else
        printf("No solution!\n");
}