#include<bits/stdc++.h>
#define  lli long long int
using namespace std;
int main()
{
    int tc,cs=1;
    scanf("%d",&tc);
    while(tc--)
    {
        lli p,k,read=0;
        scanf("%lld%lld",&p,&k);
        for(lli i=p,c=1;;i*=2,c++)
        {
            read+=i;
            if(read>=k)
            {
                printf("Case %d: %lld\n",cs++,c);
                break;
            }
        }
    }
    return 0;
}

