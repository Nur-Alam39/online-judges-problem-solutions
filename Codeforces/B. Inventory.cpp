#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,j=1;
    scanf("%d",&n);
    int a[n+1],h[n+1],ans[n+1];
    for(int i=1; i<=n; i++)
        scanf("%d",&a[i]),h[i]=i,ans[i]=-1,ans[a[i]]=a[i];
    for(int i=1; i<=n; i++)
    {

        if(ans[i]==-1)
            printf("%d ",h[i]);
        else
            printf("%d ",ans[i]);
    }
    return 0;
}
