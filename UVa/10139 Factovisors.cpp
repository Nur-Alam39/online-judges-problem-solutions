#include<bits/stdc++.h>
#define MAX 50000
using namespace std;
bool prime[MAX];
vector<int>all_prime;
void sieve()
{
    memset(prime,true,sizeof(prime));
    prime[0]=prime[1]=false;
    for(int i=2; i*i<=MAX; i++)
        if(prime[i])
            for(int j=i*2; j<=MAX; j+=i)prime[j]=false;
    all_prime.push_back(2);
    for(int i=3; i<=MAX; i+=2)
        if(prime[i])
            all_prime.push_back(i);
    printf("s=%d\n",all_prime.size());
    for(int i=1; i<all_prime.size(); i++)
        printf("%d ",all_prime[i]);
}
int main()
{
    //freopen("out.txt","w",stdout);
    sieve();
    int n,d;
    while(scanf("%d%d",&n,&d)==2)
    {
        if(n>=d)printf("%d divides %d!\n",d,n);
        else
        {
            int c_f[MAX],t,i,c_d,k[MAX],n_t,d_t;
            memset(c_f,0,sizeof(c_f)),memset(k,0,sizeof(k));
            n_t=n,d_t=d;
            while(n_t!=1)
            {
                i=0,t=n_t;
                while(t>1)
                {
                    c_d=0;
                    while(t%all_prime[i]==0)
                    {
                        c_d++,t/=all_prime[i];
                    }
                    c_f[i]+=c_d,i++;
                }
                n_t--;
            }
            i=0;
            while(d_t>1)
            {
                c_d=0;
                while(d_t%all_prime[i]==0)
                {
                    c_d++,d_t/=all_prime[i];
                }
                k[i]+=c_d,i++;
            }
            int x=1;
            for(int i=0; i<70; i++)
            {
                if(k[i])
                {
                    if(c_f[i]<k[i])
                    {
                        printf("%d does not divide %d!\n",d,n);
                        x=0;
                        break;
                    }
                }
            }
            if(x)
                printf("%d divides %d!\n",d,n);
        }
    }
    return 0;
}

