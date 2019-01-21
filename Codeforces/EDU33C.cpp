#include<bits/stdc++.h>
#define N 1000010
#define lli long long int
using namespace std;
int Arr[N],Size[N],n,p,x,y;
int root(int i)
{
    while(Arr[i]!=i)
    {
        i=Arr[i];
    }
    return i;
}
void union_we(int A,int B)
{
    int root_A = root(A);

    int root_B = root(B); printf("root a=%d  root b=%d\n",root_A,root_B);
    if(Size[root_A]<Size[root_B])
    {
        Arr[root_A]=Arr[root_B];
        Size[root_B]+= Size[root_A];
    }
    else
    {
        Arr[root_B]=Arr[root_A];
        Size[root_A]+=Size[root_B];
    }
}
bool Find(int A,int B)
{
    if(root(A)==root(B))return true;
    else return false;
}
void initialize()
{
    for(int i=1; i<=n; i++)Arr[i]=i,Size[i]=1;
}
int main()
{
    initialize();
    lli sum=0;
    scanf("%d%d",&n,&p);
    int a[n+1];
    for(int i=1; i<=n; i++)scanf("%d",&a[i]);
    for(int i=1; i<=p; i++)
    {
        scanf("%d%d",&x,&y);
        union_we(x,y);
    }
    bool visit[n+1];
    memset(visit,false,sizeof(visit));
    for(int i=1; i<=n; i++)printf("%d ",a[i]);printf("\n");
    for(int i=1; i<=n; i++)
    {
        a[i]=min(a[root(i)],a[i]);
        printf("%d ",Size[i]);
    }
    for(int i=1; i<=n; i++)
    {
        if(!visit[Arr[i]])
        {
            sum+=a[i];
            visit[Arr[i]]=true;
        }
    }
    printf("%I64d",sum);
    return 0;
}
