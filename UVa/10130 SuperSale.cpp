#include<bits/stdc++.h>
#define m 1001
using namespace std;
int n,W,w[m],c[m],dp[m][32];
int knapsack(int i,int W)
{
    if(i==n)return 0;
    if(dp[i][W]!=0)return dp[i][W];
    if(w[i]>W)return knapsack(i+1,W);
    else dp[i][W]=max(c[i]+knapsack(i+1,W-w[i]),knapsack(i+1,W));
    return dp[i][W];
}
int main()
{
    int tc;
    scanf("%d",&tc);
    while(tc--)
    {
        scanf("%d",&n);
        for(int j=0; j<m; j++)w[j]=c[j]=0;
        int g,sum=0;
        for(int i=0; i<n; i++)
            scanf("%d%d",&c[i],&w[i]);
        scanf("%d",&g);
        for(int i=0; i<g; i++)
        {
            scanf("%d",&W);
            sum+=knapsack(0,W);
            memset(dp,0,sizeof(dp));
        }
        printf("%d\n",sum);
    }
    return 0;
}
