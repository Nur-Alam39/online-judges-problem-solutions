#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("out.txt","w",stdout);
    int e,case_no=1;
    while(scanf("%d",&e)&&e)
    {
        vector<int>edge[100];
        set<int>node;
        set<int>::iterator it;
        int s,t,i,j,k;
        vector< pair<int,int> >st;
        for(i=0; i<e; i++)
        {
            int n1,n2;
            scanf("%d%d",&n1,&n2);
            node.insert(n1);
            node.insert(n2);
            edge[n1].push_back(n2);
            edge[n2].push_back(n1);
        }
        while(scanf("%d%d",&s,&t))
            {
                if(s==0&&t==0)
                    break;
                st.push_back(make_pair(s,t));
            }
        for(i=0; i<st.size(); i++)
        {
            int u,v,sc,d,level[100];
            queue<int>q;
            for(j=0; j<100; j++)
                level[j]=-100;
            sc=st.at(i).first;
            d=st.at(i).second;
            level[sc]=0;
            q.push(sc);
            while(!q.empty())
            {
                u=q.front();
                q.pop();
                for(k=0; k<edge[u].size(); k++)
                {
                    v=edge[u][k];
                    if(level[v]==-100)
                    {
                        level[v]=level[u]+1;
                        q.push(v);
                    }
                }
            }
            int c=0;
            for(it = node.begin(); it != node.end(); it++)
                if(level[*it]>d)
                    c++;
            printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",case_no++,c,sc,d);
        }
    }
    return 0;
}
