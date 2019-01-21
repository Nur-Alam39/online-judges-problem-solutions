#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    int a[n],s=0;
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]),s+=a[i];
    if(s%k)return printf("No"),0;
    int d=s/k;
    int p=0,c=0,l=0;
    int ans[n];
    for(int i=0;i<n;i++)
    {
        p+=a[i],c++;
        if(p==d)p=0,ans[l++]=c,c=0;
        else if(p>d)return printf("No"),0;
    }
    printf("Yes\n");
    for(int i=0;i<l;i++)
    printf("%d ",ans[i]);
    return 0;
}



