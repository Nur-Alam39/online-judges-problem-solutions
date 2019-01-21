#include<bits/stdc++.h>
#define n 2000
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
    //freopen("out.txt","w",stdout);
    sieve();
    int x,c;
    while(scanf("%d%d",&x,&c)==2)
    {
        int p=1;
        vector<int>in;
        in.push_back(0),in.push_back(1);
        for(int i=0;; i++)
        {
            if(all_prime[i]<=x)
            {
                in.push_back(all_prime[i]);
                p++;
            }
            else break;
        }
        //for(int i=1; i<=p; i++)printf("%d ",in[i]);
        //printf("n=%d\n",p);
        //printf("size=%d\n",in.size());
        printf("%d %d: ",x,c);
        if(p%2==0)
        {
            if(2*c>=p)for(int i=1; i<in.size(); i++)
                {
                    printf("%d",in[i]);
                    if(i<in.size()-1)printf(" ");
                }
            else
            {
                int i=(p/2)-(c-1),f=2*c;
                for(; f; i++,f--)
                {
                    printf("%d",in[i]);
                    if(f>1)printf(" ");
                }

            }
        }
        else
        {
            if(2*c-1>=p)for(int i=1; i<in.size(); i++)
                {
                    printf("%d",in[i]);
                    if(i<in.size()-1)printf(" ");
                }
            else
            {
                int i=((p/2)+1)-((2*c-1)/2),f=2*c-1;
                for(; f; i++,f--)
                {
                    printf("%d",in[i]);
                    if(f>1)printf(" ");
                }
            }
        }
        printf("\n\n");
    }
    return 0;
}


