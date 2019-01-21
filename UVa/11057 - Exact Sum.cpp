#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        int a[n+1],mx=INT_MAX,m,n1=0,n2=0,i,j;
        for(i=0; i<n; i++)scanf("%d",a+i);
        sort(a,a+n);
        scanf("%d",&m);
        for(i=0; i<n; i++)
            for(j=i+1; j<n; j++)
                if(a[i]+a[j]==m)
                {
                    if((a[j]-a[i])<mx)
                        mx=a[j]-a[i],n1=i,n2=j;
                    break;
                }
        printf("Peter should buy books whose prices are %d and %d.\n\n",a[n1],a[n2]);
    }
    return 0;
}
