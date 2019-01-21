#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    scanf("%d",&tc);
    while(tc--)
    {
        int n,mx=-100;
        scanf("%d",&n);
        int a[n+1],b[n+1];
        for(int i=1; i<=n; i++)scanf("%d",&a[i]);
        for(int j=1,i=n; i>=1; i--,j++)
            if(a[i]>=mx)b[j]=i,mx=a[i];
            else b[j]=b[j-1];
        for(int i=1,j=n; i<=n; i++,j--)printf("%d ",b[j]-i);
    }
    return 0;

}
