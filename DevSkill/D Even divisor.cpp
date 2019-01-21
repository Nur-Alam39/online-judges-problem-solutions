#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int tc;
    scanf("%ld",&tc);
    while(tc--)
    {
        long long int n,sum=0,i,p;
        scanf("%lld",&n);
        for(i=1; i*i<=n; i++)
        {
            if(n%i==0)
            {
                if(i%2==0)
                    sum+=i;
                p=n/i;
                if(p%2==0)
                    sum+=p;
            }
        }
        double s=sqrt(n);
        if(s*s==n)
            sum-=s;
        printf("%lld\n",sum);
    }
    return 0;
}
