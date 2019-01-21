#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    lli a[n];
    for(int i=0;i<n;i++)scanf("%I64d",&a[i]);
    int i=0,j=n-1;
    lli sum1=0,sum2=0,ans=0;
    while(i<=j)
    {
        if(sum1<=sum2)sum1+=a[i],i++;
        else sum2+=a[j],j--;
        if(sum1==sum2)ans=sum1;
    }
    printf("%I64d",ans);
    return 0;
}
