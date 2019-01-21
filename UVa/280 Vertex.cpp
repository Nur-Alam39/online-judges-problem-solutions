#include<bits/stdc++.h>
using namespace std;
vector<int>edge[102];
bool visit[102];
int not_reachable;
void dfs(int node)
{
    int s=edge[node].size(),x;
    for(int i=0; i<s; i++)
    {
        x=edge[node][i];
        if(!visit[x])
        {
            visit[x]=true;
            not_reachable--;
            dfs(x);
        }
    }
}
int main()
{
    int n;
    while(scanf("%d",&n)&&n)
    {
        for(int i=0; i<=n; i++)edge[i].clear();
        int start,vertex,q,node;
        while(scanf("%d",&start)&&start)
            while(scanf("%d",&vertex)&&vertex)
                edge[start].push_back(vertex);
        scanf("%d",&q);
        while(q--)
        {
            for(int i=0; i<=n; i++)visit[i]=false;
            scanf("%d",&node);
            not_reachable=n;
            dfs(node);
            printf("%d",not_reachable);
            for(int i=1; i<=n; i++)if(!visit[i])printf(" %d",i);
            printf("\n");
        }
    }
    return 0;
}
