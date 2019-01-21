#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d;
    scanf("%d%d",&n,&d);
    int a[n+1],b[n+1];
    for(int i=1; i<=n; i++)
        scanf("%d",&a[i]);
    for(int i=1; i<=n; i++)
        scanf("%d",&b[i]);
    int f=n-d;
    printf("f=%d\n",f);
    if(a[0]==1&&b[f]==1)
    {
        for(int i=1; i<=n; i++)
            if(a[i]==1&&b[i]==1&&i>=f)return printf("YES"),0;
    }
    else return printf("NO"),0;
    return printf("NO"),0;
}

