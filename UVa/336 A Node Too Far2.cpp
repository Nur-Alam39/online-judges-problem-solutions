#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,e,u,v,s;
    scanf("%d",&e);
    bool visit[100];
    vector<int>a[100];
    int level[100];
    for(int i=0; i<e; i++)
    {
        scanf("%d%d",&u,&v);
        a[u].push_back(v);
    }
    printf("Source:");
    scanf("%d",&s);
    visit[s]=true;
    queue<int>q;
    q.push(s);
    level[s]=0;
    while(!q.empty())
    {
       int c=q.front();
       printf("%d level=%d\n",c,level[c]);
       q.pop();
       for(int i=0;i<a[c].size();i++)
       {
           if(visit[a[c][i]]==false)
           {
               q.push(a[c][i]);
               visit[a[c][i]]=true;
               level[a[c][i]]=level[c]+1;
           }
       }
    }
    printf("\nLevel:\n");
    for(int i=0;i<n;i++)printf("%d ",level[i]);
    return 0;
}

