#include<bits/stdc++.h>
#define N 1000000
using namespace std;
bool ln[N];
void sieve()
{
    for(int i=1; i<=N; i++)ln[i]=true;for(int i=2; i<=N; i+=2)ln[i]=false;
    //for(int i=1;i<=1000;i++)if(ln[i])printf("%d ",i);

    for(int i=3; i<=N; i++)
    {
        if(ln[i]==true)
        {
            int r=i,k=0;
            for(int j=1;j<=N;j++)
                {
                    if(ln[j])k++;
                    if(k==r)
                    {
                        ln[j]=false;
                        k=0;
                    }
                }
        }
    }
    for(int i=1;i<=N;i++)if(ln[i])printf("%d ",i);
}
int main()
{

    sieve();
    return 0;
}
