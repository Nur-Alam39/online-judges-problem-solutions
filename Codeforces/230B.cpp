#include<bits/stdc++.h>
using namespace std;
void sieve(long int n,bool p[],bool psq[],int a[])
{
    for(long int i=2; i<=n; i++)p[i] = true;
    for(long int i=0; i<=(n*n+1); i++)psq[i] = false;
    p[1] = false;
    for(long int p1=2; p1*p1<=n; p1++)
        if(p[p1]==true)
            for (long int i=p1*2; i<=n; i+= p1)p[i] = false;
    int j=0;
    for(long int p1=2; p1<=n; p1++)
        if(p[p1])a[j++]=p1,psq[p1*p1]=true;
}
int nod(long int n)
{
    if(n==1)return 1;
    bool p[n+1], psq[n*n+1];
    int a[n];
    sieve(n,p,psq,a);
    int nd=1;
    for(long int i=0;; i++)
    {
        if(a[i]*a[i]*a[i]>n)break;
        int cnt=1;
        while (n%a[i]==0)
        {
            n=n/a[i];
            cnt=cnt+1;
        }
        nd*=cnt;
    }
    if(p[n])nd*=2;
    else if(psq[n])nd*=3;
    else if(n!=1)nd*=4;
    return nd;
}
int main()
{
    int n,c;
    long int x;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%ld",&x);
        int c=nod(x);
        if(c==3)printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
