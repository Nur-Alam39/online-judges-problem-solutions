#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,p;
    scanf("%d%d",&n,&x);
    int a[101],c[101],ase=0,cn=0;
    memset(c,0,sizeof(c));
    for(int i=0; i<n; i++)
    {
        scanf("%d",&p);
        if(p==x)ase=1;
        a[i]=p,c[p]=1;
    }
    sort(a,a+n);
    for(int i=0; i<x; i++)if(c[i]!=1)cn++;
    if(!ase)printf("%d",cn);
    else printf("%d",cn+1);
    return 0;
}

