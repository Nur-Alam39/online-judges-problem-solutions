#include<bits/stdc++.h>
#define n 10000010
using namespace std;
bool prime[n];
void sieve()
{
    memset(prime,true,sizeof(prime));
    prime[0]=prime[1]=false;
    for(int i=2; i*i<=n; i++)
        if(prime[i])
            for(int j=i*2; j<=n; j+=i)prime[j]=false;
}
int main()
{
    //freopen("out.txt","w",stdout);
    sieve();
    int s,i;
    while(scanf("%d",&s)&&s)
    {
        for(i=2; i<s; i++)
            if(prime[i]&&prime[s-i])
            {
                printf("%d:\n%d+%d\n",s,i,s-i);
                break;
            }
        if(i==s)printf("%d:\nNO WAY!\n",s);
    }
    return 0;
}
