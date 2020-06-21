#include<bits/stdc++.h>
using namespace std;
int a[1010][1010],t,r,direction[2]= {1,-1};
char visit[1010][1010];
void dfs(int i,int j,int r)
{
    if(visit[i][j]!='0')return;
    if(r)visit[i][j]='Y',r--;
    else
    {
        visit[i][j]='N';
        return;
    }
    int m,n;
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            m=x+direction[i]*M,n=y+direction[j]*N;
            if(m>=0&&m<R&&n>=0&&n<C&&a[m][n]!=-1&&r)
            {
                dfs(m,n,r);
            }
            m=x+direction[i]*N,n=y+direction[j]*M;
            if(m>=0&&m<R&&n>=0&&n<C&&a[m][n]!=-1&&r)
            {
                dfs(m,n,r);
            }
        }
    }
}
int main()
{
    int tc;
    scanf("%d",&tc);
    while(tc--)
    {
        int n,m;
        scanf("%d%d",&n,&m);
        memset(a,0,sizeof(grid));
        memset(visit,'0',sizeof(visit));
        for(int i=0; i<n; i++)
            for(int j=0; j<m; j++)
                {
                    scanf("%d",&a[i][j]);
                    if(a[i][j]==-1)visit[i][j]='B';
                }
        for(int i=0; i<n; i++)
            for(int j=0; j<m; j++)
            {
                if(a[i][j]>0&&visit[i][j]=='0'])
                {
                    t=r=a[i][j];
                    dfs(i,j,r);
                }
            }
        }
    return 0;
}
