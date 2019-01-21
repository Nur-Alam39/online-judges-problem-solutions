#include<bits/stdc++.h>
using namespace std;
int a[5050];
int main()
{
    int n,x,y,w,z;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)scanf("%d",&a[i]);
    for(int i=1;i<=n;i++)
    {
        x=i;
        y=a[i];
        z=a[a[i]];
        w=a[a[a[i]]];
        if(i!=y&&y!=z&&z!=w&&w==i)return printf("YES"),0;
    }
    printf("NO");
    return 0;
}

