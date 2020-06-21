#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    lli nibo=a[0],nibona=0,bad;
    for(int i=1;i<n;i++)
    {
        if(nibo>nibona)bad=nibo;
        else bad=nibona;
        nibo=nibona+a[i];
        nibona=bad;
    }
    lli ans=max(nibona,nibo);
    printf("%lld\n",ans);
    return 0;
}
