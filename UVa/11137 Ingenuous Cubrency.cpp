#include<bits/stdc++.h>
using namespace std;
long long dp[22][10005];
int coin[22];
void fill_c()
{
    for(int i=0;i<21;i++)
        coin[i]=pow(i+1,3);
}
long long coin_change(int i,int amount)
{
    if(i>20||amount<0)return 0;
    if(amount==0)return 1;
    if(dp[i][amount]!=-1)return dp[i][amount];
    return dp[i][amount]=coin_change(i,amount-coin[i])+coin_change(i+1,amount);
}
int main()
{
    fill_c();
    long long res;
    int make;
    memset(dp,-1,sizeof(dp));
    while(scanf("%d",&make)!=EOF)
    {
        res=coin_change(0,make);
        printf("%lld\n",res);
    }
    return 0;
}

