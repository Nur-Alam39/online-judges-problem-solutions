#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    lli a,b,k,d,x=0,p,ans;
    while(t--)
        {
            scanf("%I64d%I64d%I64d",&a,&b,&k);
            d=k/2;
            if(k%2==0)
               ans=(x+d*a),ans=(ans-d*b);
            else
                p=d+1,ans=(x+p*a),ans=(ans-d*b);
            printf("%I64d\n",ans);
        }
    return 0;
}

