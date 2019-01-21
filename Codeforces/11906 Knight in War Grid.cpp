#include<bits/stdc++.h>
#define Max 105
using namespace std;
int grid[Max][Max],cnt[Max][Max],visit[Max][Max];
int R,C,M,N,W,x,y,direction[2]= {1,-1};
void dfs(int x,int y)
{
    if(visit[x][y]==1)return;
    visit[x][y]=1;
    int m,n;
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            m=x+direction[i]*M,n=y+direction[j]*N;
            if(m>=0&&m<R&&n>=0&&n<C&&grid[m][n]!=-1)
            {
                cnt[m][n]++;
                dfs(m,n);
            }
            m=x+direction[i]*N,n=y+direction[j]*M;
            if(m>=0&&m<R&&n>=0&&n<C&&grid[m][n]!=-1)
            {
                cnt[m][n]++;
                dfs(m,n);
            }
        }
    }
}
int main()
{
    int tc,cs=1;
    scanf("%d",&tc);
    while(tc--)
    {
        memset(grid,0,sizeof(grid));
        memset(visit,0,sizeof(visit));
        memset(cnt,0,sizeof(cnt));
        scanf("%d%d%d%d%d",&R,&C,&M,&N,&W);
        for(int i=0; i<W; i++)
        {
            int u,v;
            scanf("%d%d",&u,&v);
            grid[u][v]=-1;
        }
        dfs(0,0);
        int even=0,odd=0;
        for(int i=0; i<R; i++)
        {
            for(int j=0; j<C; j++)
            {
                if(M==0|N==0||M==N)cnt[i][j]/=2;
                if(cnt[i][j]||(i==0&&j==0))
                {
                    if(cnt[i][j]%2!=0)odd++;
                    else even++;
                }
            }
        }
        printf("Case %d: %d %d\n",cs++,even,odd);
    }
    return 0;
}
