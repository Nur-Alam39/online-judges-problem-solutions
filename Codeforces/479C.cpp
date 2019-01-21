#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i;
    scanf("%d%d",&n,&k);
    int a[n+1],x;
    for(i=1;i<=n;i++)scanf("%d",&a[i]);
    sort(a+1,a+n+1);
    if(a[k]==a[k+1])return printf("-1"),0;
    if(k==n)return printf("%d",a[n]),0;
    if(k==0&&a[1]>1)return printf("1"),0;
    if(k==0&&a[1]==1)return printf("-1"),0;
    x=a[k];
    if(x>1000000000)printf("-1");
    else printf("%d",x);
    return 0;
}

