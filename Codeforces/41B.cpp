#include<bits/stdc++.h>
#define M 100015
using namespace std;
int a[M],t[M],all,n,k,q;
int main()
{
    scanf("%d%d",&n,&k);
    for(int i=1;i<=n;i++)scanf("%d",&a[i]);
    for(int i=1;i<=n;i++){
        scanf("%d",&q);
        if(q)all+=a[i],a[i]=0;
    }
    t[1]=a[1],q=-1;
    for(int i=2;i<=n;i++)t[i]=t[i-1]+a[i];
    for(int i=1;i<=n;i++)q=max(t[i]-t[i-k],q);
    printf("%d",q+all);
    return 0;
}

