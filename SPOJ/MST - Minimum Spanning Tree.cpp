#include<bits/stdc++.h>
#define M 10005
using namespace std;
vector<pair<int,pair<int,int> > >edg;
int p[M];
int Find(int x)
{
    if(p[x]==x)
        return x;
    return Find(p[x]);
}
void Union(int x,int y)
{
    int a,b;
    a=Find(x),b=Find(y);
    if(a!=b)
        p[a]=b;
}
void init(int n)
{
    for(int i=1; i<=n; i++)
        p[i]=i;
}
int mst(int n)
{
    int s=edg.size(),c=0,mst_value=0;
    for(int i=0; i<s; i++)
    {
        int u,v,w;
        u=edg[i].second.first;
        v=edg[i].second.second;
        w=edg[i].first;
        if(Find(u)!=Find(v))
        {
            Union(u,v);
            mst_value+=w;
            c++;
            if(c==n-1)
                break;
        }
    }
    return mst_value;
}
int main()
{
    int n,m,u,v,w;
    scanf("%d%d",&n,&m);
    for(int i=0; i<m; i++)
    {
        scanf("%d%d%d",&u,&v,&w);
        edg.push_back(make_pair(w,make_pair(u,v)));
    }
    init(n);
    sort(edg.begin(),edg.end());
    int ans=mst(n);
    printf("%d\n",ans);
    return 0;
}
