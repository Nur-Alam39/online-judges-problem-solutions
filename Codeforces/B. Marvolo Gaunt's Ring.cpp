#include<bits/stdc++.h>
using namespace std;
int dp[100005][4],a[100005];
int Int(){int x;scanf("%d",&x);return x;}
int main()
{
    int n=Int(),p=Int(),q=Int(),r=Int();
    for(int i=1;i<=n;i++)a[i]=Int();
    for(int i=1;i<=n;i++)
    {
        dp[i][1]=max(dp[i-1][1],p*a[i]);
        dp[i][2]=max(dp[i-1][2],dp[i][1]+q*a[i]);
        dp[i][3]=max(dp[i-1][3],dp[i][2]+r*a[i]);
    }
    printf("%d\n",dp[n][3]);
    return 0;
}
