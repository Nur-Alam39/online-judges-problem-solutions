#include<bits/stdc++.h>
#define N 100000
using namespace std;
int cv[N+5],C[N+5],n,steps=0;
vector<int>edge[N+5];
bool check()
{
    for(int i=1; i<=n; i++)if(cv[i]!=C[i])return false;
    return true;
}
void dfs(int c,int v)
{
    cv[v]=c;
    if(check())
    {
        printf("%d",steps);
        return;
    }
    for(int i=0; i<edge[v].size(); i++)dfs(c,edge[v][i]);
    return ;
}
int main()
{
    int v,c=2,i;
    scanf("%d",&n);
    for(i=1; i<=n-1; i++)
    {
        scanf("%d",&v);
        edge[v].push_back(c++);
    }
    for(i=1; i<=n; i++)scanf("%d",&C[i]);
    for(i=1; i<=n; i++)
    {
        steps++;
        dfs(C[i],i);
        if(check())return printf("\nhere%d",steps),0;
    }
}
