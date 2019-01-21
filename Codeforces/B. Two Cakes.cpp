#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,l,r,mid,x,y;
    scanf("%d%d%d",&n,&a,&b);
    l=1,r=(a+b)/n+1;
    while(l<=r)
    {
        mid=(l+r)/2;
        x=a/mid,y=b/mid;
        if((x+y>=n)&&(x&&y))l=mid+1;
        else r=mid-1;
    }
    printf("%d",--l);
    return 0;
}
