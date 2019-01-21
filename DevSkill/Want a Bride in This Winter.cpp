#include<bits/stdc++.h>
#define  lli long long int
using namespace std;
int cnt[1000005];
void sieve()
{
    for(lli i=1;i<=1000005;i++)
    {
        lli a,a2,a3;
        a2=i*i,a3=a2*i,a=a2+a3;
        lli sq=sqrt(a);
        if(a-(sq*sq)==0)cnt[i]=cnt[i-1]+1;
        else cnt[i]=cnt[i-1];
    }
}
int main()
{
    sieve();
    int tc,n,k;
    scanf("%d",&tc);
    while(tc--)
    {
        scanf("%d%d",&n,&k);
        if(cnt[n]==k)printf("I am married now\n");
        else printf("Baba amar ki biye hobe na\n");
    }
    return 0;
}

