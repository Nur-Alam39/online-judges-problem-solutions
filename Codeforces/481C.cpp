#include<bits/stdc++.h>
#define lli long long int
//scanf("%I64d",&n);
using namespace std;
int main()
{
    lli n,m,l,i,j,k=1;
    scanf("%I64d%I64d",&n,&m);
    lli a[n+1],b[n+2];
    b[1]=1;
    for(i=1;i<=n;i++)scanf("%I64d",&a[i]),b[i+1]=a[i]+1;
    for(i=2;i<=n;i++)a[i]+=a[i-1];
    for(i=2;i<=n;i++)b[i]=a[i-1]+1;
    for(i=1;i<=m;i++)
    {
        scanf("%I64d",&l);
        for(j=k;j<=n;j++)
        {
            if(l>=b[j]&&l<=a[j])
            {
                printf("%I64d %I64d\n",j,l-b[j]+1);
                k=j;
                break;
            }
        }
    }
    return 0;
}

