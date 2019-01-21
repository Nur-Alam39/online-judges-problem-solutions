#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,f;
    long long int k;
    scanf("%d%lld",&n,&k);
    int a[n+1];
    for(int i=1; i<=n; i++)scanf("%d",&a[i]);
    sort(a+1,a+n+1);
    if(k%n==0)
    {
        k/=n;
        f=n;
        printf("1.k=%d n=%d f=%d",k,n,f);
    }
    else
    {
        f=k%n,k/=n;
        k++;
        printf("\n2.k=%d f=%d",k,f);
    }
    printf("\n%d %d",a[k],a[f]);
    return 0;
}
