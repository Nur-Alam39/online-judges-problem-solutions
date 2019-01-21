#include<bits/stdc++.h>
#define n 4000
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
    while(f*f<=x&&i<=4000)
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
    sieve();
    int x,c=0;
    scanf("%d",&x);
    for(int i=1; i<=x; i++)
    {
        vector<int> p_f= primefactor(i);
        set<int>d;
        for(int i=0; i<p_f.size(); i++)
            d.insert(p_f[i]);
        if(d.size()==2)
                c++;
    }
    printf("%d",c);
    return 0;
}
