#include <stdio.h>
#include <stdlib.h>
int max(int a ,int b)
{
    return(a>b)?a:b;
}
int knapsack(int W, int wt[],int v[], int n)
{
    int i,w;
    int k[n+1][W+1];
    for(i=0;i<=n;i++)
        for(w=0;w<=W;w++)
            if(i==0||w==0)
                k[i][w]=0;
            else if (wt[i-1]<=w)
            k[i][w]= max( v[i-1] + k[i-1][w-wt[i-1]] , k[i-1][w]);
            else
                k[i][w]=k[i-1][w];
    for(i=n;i>=0;i--)
        {for(w=0;w<=W;w++)
         printf(" %d ",k[i][w]);
         printf("\n");
        }
    return k[n][W];
}
int main()
{
    int W ,n,wt[20],v[20],i;
    printf("Enter number of objects : ");
        scanf("%d",&n);
    printf("Enter the weights of objects :\n");
    for(i=0;i<n;i++)
        scanf("%d",&wt[i]);
    printf("Enter profit of each resp. : \n");
    for(i=0;i<n;i++)
        scanf("%d",&v[i]);
    printf("Enter capacity of knapsack : ");
        scanf("%d",&W);
    int p =knapsack(W,wt,v,n);
    printf("profit = %d ",p);
    return 0;
}
