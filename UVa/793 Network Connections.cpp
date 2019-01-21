#include<bits/stdc++.h>
#define N 10000
using namespace std;
int A[N+5],Size[N+5],n;
int root(int x)
{
    while(A[x]!=x)x=A[x];
    return x;
}
void Union(int x,int y)
{
    int r1,r2;
    r1 = root(x),r2 = root(y);
    if(Size[r1]<Size[r2])
    {
        A[r1]=A[r2];
        Size[r2]+= Size[r1];
    }
    else
    {
        A[r2]=A[r1];
        Size[r1]+=Size[r2];
    }
}
void initialize()
{
    for(int i=1; i<=n; i++)A[i]=i,Size[i]=1;
}
bool Find(int x,int y)
{
    if(root(x)==root(y))return true;
    return false;
}
int main()
{
    int tc;
    scanf("%d",&tc);
    while(tc--)
    {
        char c,nl;
        int s=0,u=0,x,y;
        scanf("%d%c",&n,&nl);
        initialize();
        while(scanf("%c",&c)!=EOF&&c!='\n')
        {
            scanf("%d%d%c",&x,&y,&nl);
            if(c=='c')Union(x,y);
            else
            {
                bool t=Find(x,y);
                if(t)s++;
                else u++;
            }
        }
        printf("%d,%d\n",s,u);
        if(tc)printf("\n");
    }
    return 0;
}
