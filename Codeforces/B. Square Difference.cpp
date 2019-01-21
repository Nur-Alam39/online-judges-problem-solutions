#include<bits/stdc++.h>
#define lli long long int
using namespace std;
bool prime(lli n)
{
    lli sq=sqrt(n);
    for(lli i=2;i<=sq;i++)
        if(n%i==0)return false;
    return true;
}
int main()
{
    int tc;
    scanf("%d",&tc);
    lli a,b,c,d;
    while(tc--)
    {
        scanf("%I64d%I64d",&a,&b);
        c=a+b,d=a-b;
        if(d==1&&prime(c))printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}

