#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
    {
        int j=i;
        while(j+1<n&&a[j+1]<=a[j]*2)j++;
        ans=max(ans,j-i+1);
        i=j;
    }
    printf("%d",ans);
    return 0;
}

