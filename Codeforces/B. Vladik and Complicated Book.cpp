#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,l,r,x,j;
    scanf("%d%d",&n,&m);
    int a[n+1];
    for(int i=1; i<=n; i++)
        scanf("%d",a+i);
    for(int i=0; i<m; i++)
    {
        vector<int>b;
        scanf("%d%d%d",&l,&r,&x);
        for(j=l; j<=r; j++)
            b.push_back(a[j]);
        sort(b.begin(),b.end());
        if(a[x]==b[x-l])
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
