#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,m,v;
    scanf("%ld%ld",&n,&m);
    long int a[n];
    for(int i=0; i<n; i++)
        scanf("%ld",&a[i]);
    sort(a,a+n);
    for(long int i=0; i<m; i++)
    {
        scanf("%ld",&v);
        printf("%d ",upper_bound(a,a+n,v)-a);
    }
    return 0;
}
