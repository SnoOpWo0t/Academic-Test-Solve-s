#include<stdio.h>
void knapsack(int n,int c,int w[],int v[])
{
   int dp[n+1][c+1];
   int i,j;
   for(i=0;i<=n;i++)
   {
       for(j=0;j<=c;j++)
       {
           if(i==0||j==0)
            dp[i][j]=0;
           else
           {
               if(w[i-1]>j)
                dp[i][j]=dp[i-1][j];
               else
                dp[i][j]=(dp[i-1][j] > v[i-1] + dp[i-1][j-w[i-1]]) ? dp[i-1][j] : v[i-1] + dp[i-1][j-w[i-1]];
           }
           printf("%d ",dp[i][j]);
       }
       printf("\n");

   }
   printf("Maximum Profit = %d\n",dp[n][c]);

}

int main()
{
    int n,i,c;
    printf("Enter No Of Item: ");
    scanf("%d",&n);
    int w[n], v[n];
    for(i=0;i<n;i++)
        scanf("%d",&w[i]);

     for(i=0;i<n;i++)
        scanf("%d",&v[i]);
        

printf("Enter maximum Capacity: ");
scanf("%d",&c);
     
        knapsack(n,c,w,v);

return 0;
}
