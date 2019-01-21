#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
    int n,k,m;
    scanf("%d%d%d",&n,&k,&m);
    char a[n+1][40],q[1000];
    for(int i=1; i<=n; i++)scanf("%s",&a[i]);
    int cost[n+1];
    for(int i=1; i<=n; i++)scanf("%d",&cost[i]);
    map<string,int>s_in;
    int p=1,w[k+1],x,in,r;
    for(int i=0; i<k; i++)
    {
        w[p]=INT_MAX;
        scanf("%d",&x);
        for(int j=0; j<x; j++)
        {
            scanf("%d",&in);
            if(cost[in]<w[p])w[p]=cost[in];
            s_in[a[in]]=p;
        }
        p++;
    }
    lli sum=0;
    for(int i=0; i<m; i++)
        scanf("%s",&q),sum+=w[s_in[q]];
    printf("%I64d",sum);
    return 0;
}

