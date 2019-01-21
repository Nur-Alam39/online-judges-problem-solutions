#include<bits/stdc++.h>
#define n 50000
using namespace std;
bool prime[n];
vector<int>all_prime;
void sieve()
{
    memset(prime,true,sizeof(prime));
    prime[0]=prime[1]=false;
    for(int i=2; i*i<=n; i++)
        if(prime[i])
            for(int j=i*2; j<=n; j+=i)prime[j]=false;
    all_prime.push_back(2);
    for(int i=3; i<=n; i+=2)
        if(prime[i])
            all_prime.push_back(i);
}
vector<int>primefactor(int x)
{
    vector<int>factors;
    int i=0,f;
    f=all_prime[i];
    while(f*f<=x&&i<=50000)
    {
        while(x%f==0)
        {
            x=x/f;
            factors.push_back(f);
        }
        f=all_prime[++i];
        if(f==0)break;
    }
    if(x!=1)factors.push_back(x);
    return factors;
}
int main()
{
    //freopen("out.txt","w",stdout);
    sieve();
    int x;
    while(scanf("%d",&x)&&x)
    {
        printf("%d = ",x);
        if(x<0)
            printf("-1 x ");
        x=abs(x);
        vector<int> p_f= primefactor(x);
        for(int i=0; i<p_f.size(); i++)
            {
                printf("%d",p_f[i]);
                if(i<p_f.size()-1)printf(" x ");
            }
        printf("\n");
    }
    return 0;
}
