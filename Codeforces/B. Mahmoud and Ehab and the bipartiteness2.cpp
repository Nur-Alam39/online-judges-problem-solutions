#include<bits/stdc++.h>
#define pk push_back
using namespace std;
vector<long long> e[100005];
bool vt[100005];
long long lvl[100005];
void dfs(long long nd,long long d)
{
    vt[nd]=true;
    lvl[nd]=d;
    for(long long i=0;i<e[nd].size();i++)
        if(!vt[e[nd][i]])
            dfs(e[nd][i],d+1);
}
int main()
{
    long long n,u,v,a=0,b=0,i;
    scanf("%ld",&n);
    for(i=0;i<n-1;i++)
    {
         scanf("%ld%ld",&u,&v);
        e[u].pk(v),e[v].pk(u);
    }
    dfs(1,1);
    for(i=1;i<=n;i++)
        if(lvl[i]%2)a++;
        else b++;
    printf("%ld",a*b-n+1);
    return 0;
}
