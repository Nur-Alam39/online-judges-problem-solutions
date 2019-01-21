#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
    int n,a[400],sum=0,angle=360;
    scanf("%d",&n);
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    if(n==1)printf("360");
    else
    {
        sort(a,a+n);
        int i=0,j=n-1;
        for(int i=0;i<n;i++)
        {
           sum+=a[i];
           angle-=a[i];
           if (sum==angle){return printf("0"),0;}
           if(sum>angle&&i!=n-1){return printf("%d",sum-angle),0;}
           if(sum>angle&&i==n-1){return printf("%d",(angle+a[i])-(sum-a[i])),0;}
        }
    }
    return 0;
}
