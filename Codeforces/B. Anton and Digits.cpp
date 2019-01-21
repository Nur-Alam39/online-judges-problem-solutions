#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
    lli d2,d3,d5,d6,f,s,ans=0;
    scanf("%I64d%I64d%I64d%I64d",&d2,&d3,&d5,&d6);
    f=min(d2,min(d5,d6)),ans+=256*f,d2-=f,s=min(d2,d3),ans+=s*32;
    printf("%I64d",ans);
    return 0;
}
