#include<bits/stdc++.h>
#define N 1000010
#define lli long long int
using namespace std;
int A[N],n,p,x,y;
int root(int x)
{
    while(A[x]!=x)x=A[x];
    return x;
}
void Union(int x,int y)
{
    int r1 = root(x);
    int r2 = root(y);
    if(r1!=r2)A[r1]=A[r2];
}
void initialize()
{
    for(int i=1; i<=n; i++)A[i]=i;
}
int main()
{
    scanf("%d%d",&n,&p);
    initialize();
    int a[n+1];
    lli sum=0;
    for(int i=1; i<=n; i++)scanf("%d",&a[i]);
    for(int i=1; i<=p; i++)
    {
        scanf("%d%d",&x,&y);
        Union(x,y);
    }
    vector<int>rt;
    for(int i=1; i<=n; i++)
    {
        int r=root(i);
        if(i==r)rt.push_back(r);
        if(a[i]<a[r])a[r]=a[i];
    }
    for(int i=0; i<rt.size(); i++)sum+=a[rt[i]];
    printf("%I64d",sum);
    return 0;
}

