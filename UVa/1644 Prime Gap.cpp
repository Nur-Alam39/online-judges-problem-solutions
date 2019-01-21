#include<bits/stdc++.h>
#define n 2000000
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

int main()
{
    sieve();
    int x;
    while(scanf("%d",&x)&&x)
    {
       vector<int>::iterator p,q;
       int s,e;
       p=lower_bound(all_prime.begin(),all_prime.end(),x);
       q=upper_bound(all_prime.begin(),all_prime.end(),x);
       s=p-all_prime.begin();
       e=q-all_prime.begin();
       //printf("%d %d\n",s,e);
       if(all_prime[e-1]==x)
        printf("0\n");
       else
       {
           printf("%d\n",all_prime[e]-all_prime[s-1]);
       }
    }
    return 0;
}
