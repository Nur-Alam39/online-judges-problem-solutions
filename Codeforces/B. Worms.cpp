#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,q,w,i,j;
    scanf("%ld",&n);
    long int a[n];
    scanf("%ld",&a[0]);
    for(i=1; i<n; i++)
    {
        scanf("%ld",&a[i]);
        a[i]+=a[i-1];
    }
    scanf("%ld",&q);
    for(i=0; i<q; i++)
    {
        scanf("%ld",&w);
        printf("%ld\n",lower_bound(a,a+n,w)-a);
    }
    return 0;
}

