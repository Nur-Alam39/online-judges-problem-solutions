#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n)&&n)
    {
        int e;
        scanf("%d",&e);
        vector<int>edge[n];
        for(int i=0; i<e; i++)
        {
            int n1,n2;
            scanf("%d%d",&n1,&n2);
            edge[n1].push_back(n2);
            edge[n2].push_back(n1);
        }
        int visit[n],m=1;
        for(int i=0; i<n; i++)
            visit[i]=-10;
        queue<int>q;
        visit[0]=3;
        q.push(0);
        while(!q.empty())
        {
            int n1=q.front();
            q.pop();
            for(int i=0; i<edge[n1].size(); i++)
            {
                int x;
                x=edge[n1][i];
                if(visit[x]==-10)
                {
                    if(visit[n1]==3)
                        visit[x]=5;
                    else
                        visit[x]=3;
                    q.push(x);
                }
                else
                {
                    if(visit[n1]==visit[x])
                    {
                        printf("NOT BICOLORABLE.\n");
                        m=0;
                        break;
                    }
                }
            }
            if(m==0)
                break;
        }
        if(m==1)
            printf("BICOLORABLE.\n");
    }
    return 0;
}
