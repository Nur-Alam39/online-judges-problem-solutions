#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,s;
    scanf("%d%d",&n,&m);
    char a[n+1][100],b[n+1][100],x[100],y[100],c[100];
    for(int i=1;i<=n;i++)scanf("%s%s",&a[i],&b[i]);
    cin.ignore();
    for(int i=1;i<=m;i++)
    {
        scanf("%s%s",&x,&y);
        for(s=0;y[s]!=';';s++)c[s]=y[s];c[s]='\0';
        for(int j=1;j<=n;j++)
            if(strcmp(c,b[j])==0)printf("%s %s #%s\n",x,y,a[j]);
    }
    return 0;
}

