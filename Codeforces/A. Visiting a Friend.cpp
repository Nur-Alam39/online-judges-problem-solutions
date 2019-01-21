#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int x[n],y[n];
    bool v[m+1];
    memset(v,false,sizeof(v));
    for(int i=0; i<n; i++)scanf("%d%d",&x[i],&y[i]);
    if(n==1)
    {
        if(x[0]==0&&y[0]==m)return printf("YES"),0;
        else return printf("NO"),0;
    }
    else
    {
        if(x[0]==0)
        {
            for(int i=x[0]; i<=y[0]; i++)v[i]=true;
            for(int i=1; i<n; i++)
                if(x[i]<=y[i-1])for(int j=x[i]; j<=y[i]; j++)v[j]=true;
            for(int i=0; i<=m; i++)
                if(v[i])continue;
                else return printf("NO"),0;
            return printf("YES"),0;
        }
        else return printf("NO"),0;
    }
}
