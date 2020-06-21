#include<cstdio>
#include<cstring>
#include<vector>

using namespace std;

int n, m, a, b;
vector<vector<int> > adj;
bool vis[30][30];

int dfs(int s) {
    int cmax = 0;
    for(int i = 0; i < adj[s].size(); i++)
    {
        int v = adj[s][i];
        if(!vis[s][v])
        {
            vis[s][v] = vis[v][s] = true;
            cmax = max(cmax, 1 + dfs(v));
            vis[s][v] = vis[v][s] = false;
        }
    }
    return cmax;
}

int main() {
    while(scanf("%d %d", &n, &m) && n != 0 && m != 0) {
        adj.clear();
        adj.resize(n);
        for(int i = 0; i < m; i++) {
            scanf("%d %d", &a, &b);
            adj[a].push_back(b); adj[b].push_back(a);
        }
        int ans = 0;
        for(int i = 0; i < n; i++) {
            memset(vis, false, sizeof vis);
            ans = max(ans, dfs(i));
        }
        printf("%d\n", ans);
    }
}
