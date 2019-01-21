#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],dif[n];
    dif[0]=0,c=0;
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    for(int i=1;i<n;i++)dif[i-1]=a[i]-a[i-1];
    for(int i=0;i<n;i++)
    {
        if(dif[i]==1)c++;
        else mx=max(c,mx),c=0;
    }
    printf("%d");
    return 0;
}

