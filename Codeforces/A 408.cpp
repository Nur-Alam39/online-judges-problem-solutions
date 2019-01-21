#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k;
    scanf("%d%d%d",&n,&m,&k);
    int a[n+1],p=100000,k2=100000;
    for(int i=1;i<=n;i++)scanf("%d",a+i);
    for(int i=m+1;i<=n;i++)
    {
        if(a[i]!=0&&a[i]<=k)
        {
            p=(i-m)*10;
            break;
        }
    }
    for(int i=m-1;i>=1;i--)
    {
        if(a[i]!=0&&a[i]<=k)
        {
            k2=(m-i)*10;
            break;
        }
    }
    printf("%d",min(p,k2));
    return 0;
}
