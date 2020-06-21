#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
    int n,q,a,b;
    scanf("%d%d",&n,&q);
    lli x[n+1],mx=0,k;
    for(int i=1;i<=n;i++)
        x[i]=0;
    for(int i=1;i<=q;i++)
        {
            scanf("%d%d%lld",&a,&b,&k);
            for(int j=a;j<=b;j++)
            {
                x[j]+=k;
                if(x[j]>mx)mx=x[j];
            }
        }
        printf("%lld",mx);
    return 0;
}

