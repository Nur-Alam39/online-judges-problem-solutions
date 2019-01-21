#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
    int n;
    lli mini=10000000000,electricity,x;
    scanf("%d",&n);
    int a[n+1];
    for(int i=1;i<=n;i++)scanf("%d",&a[i]);
    for(int i=1;i<=n;i++)
        {
            electricity=0,x=i;
            for(int j=1;j<=n;j++)
                electricity+=a[j]*(abs(j-x)+abs(j-1)+abs(x-1)+abs(x-1)+abs(j-1)+abs(j-x));
            mini=min(mini,electricity);
        }
        printf("%I64d",mini);
    return 0;
}

