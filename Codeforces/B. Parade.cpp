#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0,ls=0,rs=0,ans=0,nans=0,l,r;
    scanf("%d",&n);
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d%d",&a[i],&b[i]);
        ls+=a[i],rs+=b[i];
    }
    ans=abs(ls-rs);
    for(int i=0;i<n;i++)
    {
       l=ls,r=rs;
       l-=a[i]-b[i];
       r-=b[i]-a[i];
       nans=abs(l-r);
       if(nans>ans)
       {
           ans=nans;
           c=i+1;
       }
    }
    printf("%d",c);
    return 0;
}
