#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,r=1;
    scanf("%d%d",&n,&m);
    char a[n+1][m+1],x,y;
    for(int i=0; i<n; i++)scanf("%s",&a[i]);
    for(int i=0; i<n; i++)
    {
        x='W',y='B';
        if(r)
        {
            for(int j=0; j<m; j++)
            {
                if(a[i][j]!='-')a[i][j]=x;
                swap(x,y);
            }
            r=0;
        }
        else
        {
            x='B',y='W';
            for(int j=0; j<m; j++)
            {
                if(a[i][j]!='-')a[i][j]=x;
                swap(x,y);
            }
            r=1;
        }
    }
    for(int i=0; i<n; i++)printf("%s\n",a[i]);
    return 0;
}

