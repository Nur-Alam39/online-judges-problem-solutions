#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x=0,a[105];
    scanf("%d",&n);
    bool v[605];
    memset(v,true,sizeof(v));
    for(int i=0; i<n; i++)scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
        if(a[i]&&v[a[i]])v[a[i]]=false,x++;
    printf("%d",x);
    return 0;
}

