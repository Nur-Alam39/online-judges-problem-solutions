#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[100][100],c,b[100][100],d[100][100];
    memset(b,'0',sizeof(b));
    memset(d,'.',sizeof(d));
    int n,m;
    scanf("%d%d%c",&n,&m,&c);
    for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=m; j++)
                scanf("%c",&a[i][j]);
            scanf("%c",&c);
        }
    printf("input\n");
    for(int i=1; i<=n; i++)
    {
        printf("%d.",i);
        for(int j=1; j<=m; j++)
            printf("%c",a[i][j]);
        printf("\n");
    }
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            if(a[i][j]=='#'&&b[i][j]=='0')
            {
                for(int s=1; s<=n; s++)
                {
                    b[s][j]='1';
                    if(a[s][j]=='#')
                        d[s][j]='#';
                }
            }
        }
    }
    printf("ans\n");
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
            printf("%c",d[i][j]);
        printf("\n");
    }
    return 0;
}

