#include<bits/stdc++.h>
using namespace std;
int make=100;
int dp[6][7500],coin[6]={1,5,10,25,50};
int coin_change(int i,int amount)
{
    if(i>=5)
    {
        if(amount==0)return 1;
        else return 0;
    }
    if(dp[i][amount]!=-1)return dp[i][amount];
    int res1=0,res2=0;
    if(amount-coin[i]>=0)
        res1=coin_change(i,amount-coin[i]);
    res2=coin_change(i+1,amount);
    return dp[i][amount]=res1+res2;
}
int main()
{
    memset(dp,-1,sizeof(dp));
    while(scanf("%d",&make)!=EOF)
    {
        printf("%d\n",coin_change(0,make));
    }
    return 0;
}
