#include<bits/stdc++.h>
#define N 1000010
#define lli long long int
using namespace std;
int A[N],Rank[N],n,p,x,y,r;
 vector<int>rt;
 lli sum;
int root(int x)
{
    while(A[x]!=x)x=A[x];
    return x;
}
void Union(int x,int y)
{
    int r1,r2;
    r1 = root(x);
    r2 = root(y);
    if(r1==r2)return;
    if(Rank[r1]<Rank[r2])A[r1]=r2,Rank[r2]+=Rank[r1];
    else A[r2]=r1,Rank[r1]+=Rank[r2];
}
void initialize()
{
    for(int i=1; i<=n; i++)A[i]=i,Rank[i]=1;
}
int main()
{
    scanf("%d%d",&n,&p);
    initialize();
    int a[n+1];
    for(int i=1; i<=n; i++)scanf("%d",&a[i]);
    for(int i=1; i<=p; i++)scanf("%d%d",&x,&y),Union(x,y);
    for(int i=1; i<=n; i++)
    {
        r=root(i);
        if(a[i]<a[r])a[r]=a[i];
        if(i==r)rt.push_back(r);
    }
    r=rt.size();
    for(int i=0; i<r; i++)sum+=a[rt[i]];
    printf("%I64d",sum);
    return 0;
}
