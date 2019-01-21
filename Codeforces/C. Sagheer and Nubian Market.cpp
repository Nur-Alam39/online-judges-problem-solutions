#include<bits/stdc++.h>
#define lli long long int
#define N 100005
using namespace std;
lli n,s,l,r,k,n_,m_,a[N],c[N],cst;
int main()
{
    scanf("%I64d%I64d",&n,&s);
    for(lli i=1;i<=n;i++)scanf("%I64d",&a[i]);
    l=1,r=n;
    while(l<=r)
    {
        k=(l+r)/2;
        for(lli i=1;i<=n;i++)c[i]=a[i]+i*k;
        sort(c+1,c+n+1),cst=0;
        for(lli i=1;i<=k;i++)cst+=c[i];
        if(cst<=s)n_=k,m_=cst,l=k+1;
        else r=k-1;
    }
    return cout<<n_<<" "<<m_,0;
}
