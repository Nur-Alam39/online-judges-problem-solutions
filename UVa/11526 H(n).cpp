#include<iostream>
#include<cstdio>
using namespace std;
long long int h(long long int n)
{
    long long int res=0;
    for(int i=1; i<=n; i++)
        res=(res+n/i);
    return res;
}
int main()
{
    int tc;
    scanf("%d",&tc);
    while(tc--)
    {
        long long int n,ans;
        scanf("%lld",&n);
        ans=h(n);
        printf("%lld\n",ans);
    }
    return 0;
}

