#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    int a[n],d=0;
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);
    for(int i=0; i<n; i++)
    {
        if(k==0)break;
        if(a[i]<=k&&a[i]<=8)k-=a[i];
        else if(a[i]<=k&&a[i]>8)
        {
            k-=8;
            a[i+1]+=a[i]-8;
        }
        else if(a[i]>k&&a[i]<=8)
        {
            k=0;
        }
        else if(a[i]>k&&a[i]>8&&k>=8)
        {
            k-=8;
            a[i+1]+=a[i]-8;
        }
        else if(a[i]>k&&a[i]>8&&k<8)
            k=0;
        d++;
    }
    if(k)printf("-1");
    else printf("%d",d);
    return 0;
}
