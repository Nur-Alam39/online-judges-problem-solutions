#include<bits/stdc++.h>
using namespace std;
long long dp[12][30005];
int coin[]= {5,10,20,50,100,200,500,1000,2000,5000,10000};
long long coin_change(int i,int amount)
{
    if(i>10||amount<0)return 0;
    if(amount==0)return 1;
    if(dp[i][amount]!=-1)return dp[i][amount];
    return dp[i][amount]=coin_change(i,amount-coin[i])+coin_change(i+1,amount);
}
int main()
{
    long long res;
    float make;
    memset(dp,-1,sizeof(dp));
    while(scanf("%f",&make)&&make)
    {
        int c=(make+0.001)*100.0;
        res=coin_change(0,c);
        printf("%6.2f%17lld\n",make,res);
    }
    return 0;
}
