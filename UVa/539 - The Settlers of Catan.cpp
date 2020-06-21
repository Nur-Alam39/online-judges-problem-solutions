#include<bits/stdc++.h>
using namespace std;

vector<vector<int> > adj;
int n, m;
bool vis[30][30];

int dfs(int u)
{
    int max_len = 0;
    for (int i = 0; i < adj[u].size(); i++)
    {
        int v = adj[u][i];
        //printf("%d ", v);
        if (!vis[u][v])
        {
            vis[u][v] = vis[v][u] = true;
            max_len = max(max_len, 1 + dfs(v));
            vis[u][v] = vis[v][u] = false;
        }
        //printf("\nmax_len = %d\n", max_len);
    }
    return max_len;
}

int main()
{
    while(scanf("%d %d", &n, &m) && n != 0 && m != 0)
    {
        adj.clear();
        adj.resize(n);

        int x, y;
        for (int i = 0; i < m; i++)
        {
            scanf("%d %d", &x, &y);
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            memset(vis, false, sizeof vis);
            ans = max(ans, dfs(i));
        }
        printf("%d\n", ans);
    }
    return 0;
}

