#include<bits/stdc++.h>
using namespace std;
int a[10],b[10];
int main()
{
    int n,m,n1,n2,ans=111;
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    for(int i=0;i<m;i++)scanf("%d",&b[i]);
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            if(a[i]==b[j])ans=min(ans,a[i]);
            else{
                n1=a[i]*10+b[j],n2=b[j]*10+a[i];
                ans=min(ans,min(n1,n2));
            }
    printf("%d",ans);
    return 0;
}

