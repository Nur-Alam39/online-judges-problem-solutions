#include<bits/stdc++.h>
#define n 20000000
using namespace std;
bool prime[n];
vector<int>all_prime;
vector<int>twin_prime;
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
    for(int i=1; i<all_prime.size(); i++)
                if((all_prime[i]-all_prime[i-1])==2)
                    twin_prime.push_back(all_prime[i-1]),twin_prime.push_back(all_prime[i]);
}
int main()
{
    sieve();
    int c;
    while(scanf("%d",&c)!=EOF)
    {
        printf("(%d, %d)\n",twin_prime[2*c-2],twin_prime[2*c-1]);
    }
    return 0;
}

