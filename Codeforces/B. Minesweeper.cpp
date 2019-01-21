#include<bits/stdc++.h>
using namespace std;
int x[8]= {-1,-1,-1, 0,0, 1,1,1};
int y[8]= {-1, 0, 1,-1,1,-1,0,1};
int n,m;
int main()
{
    scanf("%d%d",&n,&m);
    char a[n][m],c;
    scanf("%c",&c);
    for(int i=0; i<n; i++)scanf("%s",&a[i]);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(a[i][j]=='.')
            {
                for(int p=0; p<8; p++)
                    {
                        int h=i+x[p],g=j+y[p];
                        if(h>=0&&h<n&&g>=0&&g<m)
                            if(a[h][g]=='*')
                                return printf("NO"),0;
                    }
            }
            else if(a[i][j]!='*')
            {
                int d=a[i][j]-'0',k=0;
                for(int p=0; p<8; p++)
                    {
                        int h=i+x[p],g=j+y[p];
                        if(h>=0&&h<n&&g>=0&&g<m)
                            if(a[h][g]=='*')
                            {
                                k++;
                                if(k>d)return printf("NO"),0;
                            }
                    }
                if(k!=d)return printf("NO"),0;
            }
        }
    }
    return printf("YES"),0;
}

