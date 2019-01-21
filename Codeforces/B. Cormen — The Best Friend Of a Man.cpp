#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,ex;
    scanf("%d%d",&n,&k);
    int a[n],b[n],add=0;
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]),b[i]=a[i];
    for(int i=1; i<n; i++)
    {
        if(a[i]+a[i-1]<k)
        {
            ex=k-a[i]-a[i-1];
            add+=ex;
            b[i]=ex+a[i];
            a[i]=b[i];
        }
    }
    printf("%d\n",add);
    for(int i=0; i<n-1; i++)
        printf("%d ",b[i]);
    printf("%d",b[n-1]);
    return 0;
}

