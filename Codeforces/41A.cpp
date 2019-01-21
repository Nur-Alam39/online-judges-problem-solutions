#include<bits/stdc++.h>
using namespace std;
int a[1010];
int main()
{
    int n,m,c,mn=INT_MAX;
    scanf("%d%d",&n,&m);
    for(int i=0;i<m;i++)
        scanf("%d",&c),a[c]++;
    for(int i=1;i<=n;i++)
        if(a[i]<mn)mn=a[i];
    printf("%d",mn);
    return 0;
}
