#include<bits/stdc++.h>
#define m 1000000
using namespace std;
bool f[m];
void sieve()
{
    memset(f,true,sizeof(f));
    f[0]=false;
    for(int i=2; i*i<=m; i++)
        if(f[i])
            for(int j=i*2; j<=m; j+=i)f[j]=false;
}
int main()
{
    sieve();
    int n;
    scanf("%d",&n);
    for(int i=n-1;i>=0;i--)
        if(!f[i]&&!f[n-i])
        {
            printf("%d %d",n-i,i);
            break;
        }
    return 0;
}
