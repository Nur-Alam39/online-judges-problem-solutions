#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    int a[n];
    ll t=0;
    for(int i=0; i<n; i++)scanf("%d",a+i);
    sort(a,a+n);
    int m=a[0]%k;
    for(int i=0; i<n; i++)
    {
        if(m!=a[i]%k)
        {
            printf("-1");
            return 0;
        }
        else t+=(a[i]-a[0])/k;
    }
    printf("%I64d",t);
    return 0;
}
