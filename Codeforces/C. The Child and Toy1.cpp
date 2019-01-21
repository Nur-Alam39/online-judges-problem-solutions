#include<bits/stdc++.h>
#define pk push_back
using namespace std;
bool visit[1010][1010];
vector<int>con[2020];
vector<pair<int,int> >pv;
int n,m,v,x,y,nd,ps,s,ans;
int main()
{
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++)scanf("%d",&v),pv.pk(make_pair(v,i));
    for(int i=0;i<m;i++)
        {
            scanf("%d%d",&x,&y);
            con[y].pk(x),con[x].pk(y);
            visit[x][y]=visit[y][x]=true;
        }
    sort(pv.begin(),pv.end());
    for(int i=0;i<pv.size();i++)
    {
        nd=pv[i].second,s=con[nd].size();
        for(int j=0;j<s;j++)
        {
            ps=con[nd][j];
            ans+=pv[i].first;
            con[nd].erase(j);
        }
    }
    return printf("%d",ans),0;
}

