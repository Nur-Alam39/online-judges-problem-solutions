#include<bits/stdc++.h>
#define s 10000
using namespace std;
char G[s][s],visit[s];
int d;
int con(int i)
{
    //printf("%d ",i);
    visit[i]='1';
    for(int j=0; j<s; j++)
        if(visit[j]=='0'&&G[i][j]=='1')
        {
            con(j);
            d++;
        }
    return d;
}
int main()
{
    int n,u,v;
    scanf("%d",&n);
    for(int i=0; i<=n; i++)
    {
        visit[i]='0';
        for(int j=0; j<=n; j++)
            G[i][j]='0';
    }
    for(int i=1; i<n; i++)
    {
        scanf("%d %d",&u,&v);
        G[u][v]='1';
    }
//    for(int i=0; i<=n; i++)
//    {
//        for(int j=0; j<=n; j++)printf("%c ",G[i][j]);
//        printf("\n");
//    }
    int cn=0;
    double sum=0;
    for(int i=1; i<=n; i++)
    {
        if(G[1][i]=='1')
        {
            cn++;
            d=1;
            int f=con(i);
            //printf("%d\n",f);
            sum+=f;
        }
    }
    printf("%.15lf",sum/double(cn));
    return 0;
}

