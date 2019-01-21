#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1,n2,case_no=1;
    while(scanf("%d%d",&n1,&n2)&&n1&&n2)
    {
        int a[n1],b[n2],c,h=0;
        for(int i=0; i<n1; i++)
            scanf("%d",&a[i]);
        for(int i=0; i<n2; i++)
            scanf("%d",&b[i]);
        int x[n1+1][n2+1];
        for(int i=0; i<=n1; i++)
        {
            for(int j=0; j<=n2; j++)
            {
                if(i==0||j==0)
                    x[i][j]=0;
                else if(a[i-1]==b[j-1])
                    x[i][j]=1+x[i-1][j-1];
                else
                    x[i][j]=max(x[i-1][j],x[i][j-1]);
            }
        }
        printf("Twin Towers #%d\nNumber of Tiles : %d\n\n",case_no++,x[n1][n2]);
    }
    return 0;
}
