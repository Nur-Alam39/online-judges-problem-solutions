#include<bits/stdc++.h>
#define n 32770
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
    int c;
    while(scanf("%d",&c)&&c)
    {
        if(c==4)
            printf("1\n");
        else
        {
            int p=0,k;
            for(int i=3; i<=c/2; i+=2)
            {
                if(prime[i])
                {
                    k=c-i;
                    if(prime[k])
                        p++;
                }
            }
            printf("%d\n",p);
        }
    }
    return 0;
}

