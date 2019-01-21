#include<bits/stdc++.h>
using namespace std;
long long dp[5][30001];
int coin[6]= {1,5,10,25,50};
long long coin_change(int i,int amount)
{
    if(i>4||amount<0)return 0;
    if(amount==0)return 1;
    if(dp[i][amount]!=-1)return dp[i][amount];
    return dp[i][amount]=coin_change(i,amount-coin[i])+coin_change(i+1,amount);
}
int main()
{
    long long res;
    int make;
    memset(dp,-1,sizeof(dp));
    while(scanf("%d",&make)!=EOF)
    {
        res=coin_change(0,make);
        if(res>1)
            printf("There are %lld ways to produce %d cents change.\n",res,make);
        else
            printf("There is only 1 way to produce %d cents change.\n",make);
    }
    return 0;
}
