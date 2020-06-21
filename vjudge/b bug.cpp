#include <bits/stdc++.h>
using namespace std;
int bugs[ 2010 ];
int relation[ 2010 ];
void init( int len)
{
    for (int i=0;i<= len;i++)
        bugs[i]=i,relation[i]=1 ;
}
int Find (int bug)
{
    if(bugs[bug]==bug)return bug;
    int tem = bugs[bug];
    bugs [bug]=Find(bugs [bug]);
    relation[bug]=(relation[bug]+relation[tem]+1)%2;
    return bugs[bug];
}

void union_set( int a, int b, int x, int y)
{
    bugs[x] = y;
    relation[x] = (relation[b]-relation[a])%2;
}

int main()
{
    int s;
    int n,inter;
    int bug1,bug2,parent1,parent2;
    bool flag;
    scanf("%d",&s);
    for(int i=1;i<=s;i++ )
    {
        scanf("%d%d ",&n,&inter);
        flag=false ;
        for (int j=1;j<=inter;j++)
        {
            scanf( " %d%d ",&bug1,& bug2);
            if(flag)continue ;
            parent1=Find(bug1);
            parent2=Find(bug2);
            if (parent1==parent2)
            {
                if(relation[bug1]==relation[bug2])
                flag = true ;
            }
            union_set(bug1, bug2, parent1, parent2);
        }
        if(flag)printf("Scenario #%d:\nSuspicious bugs found!\n ",i);
        else printf("Scenario #%d:\nNo suspicious bugs found!\n ",i);
        printf(" \n");
    }
    return 0;
}
