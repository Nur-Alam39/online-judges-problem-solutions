#include<bits/stdc++.h>
#define lli  long long int
using namespace std;
int main()
{
    lli n,i;
    scanf("%I64d",&n);
    lli a[n];
    for(i=0;i<n;i++)
        scanf("%I64d",&a[i]);
    for(i=0;i<n-1;i++)
        printf("%I64d ",a[i]+a[i+1]);
    printf("%I64d",a[n-1]);
    return 0;
}
