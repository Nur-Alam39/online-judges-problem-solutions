#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int i,n,m;
    while(scanf("%ld%ld",&n,&m))
    {
        long long int c,ans;
        if(n==0&&m==0)
            break;
        set<long long>a;
        for(i=0; i<n+m; i++)
        {
            scanf("%d",&c);
            a.insert(c);
        }
        ans=(n+m)-a.size();
        printf("%lld\n",ans);
    }
    return 0;
}
