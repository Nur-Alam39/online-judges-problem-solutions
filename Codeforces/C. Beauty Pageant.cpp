#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,k,t=0;
    scanf("%d%d",&n,&k);
    int a[n+1];
    for(int i=1; i<=n; i++)scanf("%d",&a[i]);
    sort(a+1,a+n+1);
    reverse(a+1,a+n+1);
    for(int i=1;i<=k;i++)
    {
        printf("%d ",i);
        for(int j=1;j<=i;j++)printf("%d ",a[j]);
        printf("\n");
    }
    return 0;
}

