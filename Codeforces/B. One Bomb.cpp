#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,w=0;
    char c;
    scanf("%d%d%c",&n,&m,&c);
    char a[n+1][m+1];
    int f=1,c1,r1;
    for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
        {
            scanf("%s",&a[i]);//printf("%c",a[i][j]);
            if(a[i][j]=='*')
                w++;
        }
        scanf("%c",&c);
        }
        printf("w=%d\n",w);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
            printf("%c",a[i][j]);
        printf("\n");
    }

    /*for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(a[i][j]=='*')
                     {
                         c1=0;
                         r1=0;
                         for(int p=0;p<m;p++)
                            if(a[i][p]=='*')
                              c1++;
                         for(int p=0;p<n;p++)
                            if(a[p][i]=='*')
                              r1++;
                     }
                if(c1+r1==w)
                {
                    printf("YES\n%d %d",i,j);
                    f=0;
                    break;
                }
            }
            if(f==0)
                break;
        }
        if(f==1)
            printf("NO");*/
    return 0;
}
