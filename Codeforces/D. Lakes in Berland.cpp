#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,nl;
    char c;
    scanf("%d%d%d%c",&n,&m,&nl,&c);
    char a[n+1][m+1];
    vector<int>lake_position;
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            scanf("%c",&a[i][j]);
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
        {
            if(a[i][j]=='.'&&(i!=0&&j!=0&&i!=n-1&&j!=m-1))
            {
                {
                    int l,r,u,d;
                    for(l=j;; l--)
                        if(a[i][l]!='.')
                            break;
                    for(r=j;; r++)
                        if(a[i][r]!='.')
                            break;
                    for(u=i;; u--)
                        if(a[u][j]!='.')
                            break;
                    for(d=i;; d++)
                        if(a[d][j]!='.')
                            break;
                    if(l!=0&&r!=n-1&&u!=0&&d!=0)
                    {
                       nl++;
                       lake_position.push_back(l);
                       lake_position.push_back(r);
                       lake_position.push_back(u);
                       lake_position.push_back(d);
                    }
                }
            }
        }
        printf("%d",nl);
    return 0;
}

