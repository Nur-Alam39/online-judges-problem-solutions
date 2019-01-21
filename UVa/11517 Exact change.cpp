#include<bits/stdc++.h>
using namespace std;
int n[6],coin[6]= {5,10,20,50,100,200};
int dp[6][506],res1,res2;
int coin_change(int i,int amount)
{
    if(i>5||amount<0)return 0;
    if(amount==0)return 1;
    if(dp[i][amount]!=-1)return dp[i][amount];

    if(n[i]>0)
    {
        res1=coin_change(i,amount-coin[i]);
        n[i]--;
    }
    if(n[i+1]>0)
    {
        res2=coin_change(i+1,amount);
        n[i+1]--;
    }
    return dp[i][amount]=res1+res2;
}
int main()
{
    while(1)
    {
        for(int i=0; i<6; i++)
            scanf("%d",&n[i]);
        if(n[0]+n[1]+n[2]+n[3]+n[4]+n[5]==0)break;
        memset(dp,-1,sizeof(dp));
        float m;
        int amount;
        scanf("%f",&m);
        amount=(m+0.001)*100;
        printf("m=%d\n",amount);
        printf("ways=%d\n",coin_change(0,amount));
    }
    return 0;
}
