#include<bits/stdc++.h>
#define MAX 50005
using namespace std;
int edge[MAX],dis[MAX],vis[MAX];
int dfs(int u)
{
    int v,r=0;
    v=edge[u];
    vis[u]=1;
    printf("u=%d edge[u]=%d v=%d\n",u,edge[u],v);
    if(vis[v]==0)
        r=dfs(v)+1;
    vis[u]=0;
    dis[u]=r;
    printf("r=%d dis[u]=%d\n",r,dis[u]);
    return r;
}
int main()
{
    int tc,n,cs=1;
    scanf("%d",&tc);
    while(tc--)
    {
        scanf("%d",&n);
        int u,v;
        for(int i=1;i<=n;i++)
        {
            scanf("%d%d",&u,&v);
            edge[u]=v;
            dis[u]=-1;
            vis[u]=0;
        }
        int max_value=-1,max_node;
        for(int i=1;i<=n;i++)
        {
            if(dis[i]==-1)
                dfs(i);
            if(dis[i]>max_value)
                {
                    max_value=dis[i];
                    max_node=i;
                }
        }
        printf("Case %d: %d\n",cs++,max_node);
    }
    return 0;
}

