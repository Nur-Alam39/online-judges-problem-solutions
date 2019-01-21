#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll a,b,c,mx=0,f,s,t;
    int n,r,i,j,k;
    scanf("%d",&n);
    r=max(n-3*5,1);
    for(i=n;i>=r;i--)
        for(j=n;j>=r;j--)
            for(k=n;k>=r;k--)
            {
               f=i,s=j,t=k;
               a=__gcd(f,s),a=(f*s)/a;
               b=__gcd(a,t),b=(a*t)/b;
               mx=max(mx,b);
            }
    printf("%I64d",mx);
    return 0;
}
