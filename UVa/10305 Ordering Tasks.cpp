#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    while(scanf("%d%d",&n,&m)==2)
    {
        if(n==0&&m==0)
            break;
        vector<int>adj[n+5];
        int indegree[n+2],u,v;
        memset(indegree,0,(n+5)*sizeof(int));
        for(int i=0; i<m; i++)
        {
            scanf("%d%d",&u,&v);
            adj[u].push_back(v);
            indegree[v]++;
        }
        queue<int>q;
        for(int i=1; i<=n; i++)
            if(indegree[i]==0)
                q.push(i);
        vector<int>toporder;
        while(!q.empty())
        {
            int u=q.front();
            q.pop();
            toporder.push_back(u);
            for(int i=0; i<adj[u].size(); i++)
            {
                indegree[adj[u][i]]--;
                if(indegree[adj[u][i]]==0)
                    q.push(adj[u][i]);
            }
        }
        //printf("%d",toporder[0]);
        for(int i=0; i<toporder.size(); i++)
            printf("%d ",toporder[i]);
        printf("\n");
    }
    return 0;
}
