#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    scanf("%d",&tc);
    while(tc--)
    {
        int n,m;
        scanf("%d%d",&n,&m);
        char a[n+1][m+1];
        for(int i=0; i<n; i++)scanf("%s",&a[i]);
        int r=1,g=0,cost1=0,cost2=0;
        for(int i=0; i<n; i++)
        {
            if(r==1)
            {
                char x='R',y='G';
                int p=0,q=1;
                int v[2]={3,5};
                for(int j=0; j<m; j++)
                {
                    if(a[i][j]!=x)cost1+=v[p];//,a[i][j]=x;
                    swap(x,y);
                    swap(p,q);
                }
                r=0;
            }
            else
            {
               char x='G',y='R';
               int p=1,q=0;
               int v[2]={3,5};
                for(int j=0; j<m; j++)
                {
                    if(a[i][j]!=x)cost1+=v[p];//,a[i][j]=x;
                    swap(x,y);
                    swap(p,q);
                }
                r=1;
            }
        }
        r=1;
        for(int i=0; i<n; i++)
        {
            if(r==1)
            {
                char x='G',y='R';
                int p=0,q=1;
                int v[2]={5,3};
                for(int j=0; j<m; j++)
                {
                    if(a[i][j]!=x)cost2+=v[p];//,a[i][j]=x;
                    swap(x,y);
                    swap(p,q);
                }
                r=0;
            }
            else
            {
               char x='R',y='G';
               int p=1,q=0;
               int v[2]={5,3};
                for(int j=0; j<m; j++)
                {
                    if(a[i][j]!=x)cost2+=v[p];//,a[i][j]=x;
                    swap(x,y);
                    swap(p,q);
                }
                r=1;
            }
        }
        printf("%d\n",min(cost1,cost2));
    }
    return 0;
}
