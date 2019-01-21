#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,q,j;
    scanf("%ld",&n);
    long int a[n],m;
    for(long int i=0; i<n; i++)
        scanf("%ld",&a[i]);
    scanf("%ld",&q);
    sort(a,a+n);
    for(long int i=0; i<q; i++)
    {
        scanf("%ld",&m);
        j=upper_bound(a,a+n,m)-a;
        cout<<j<<endl;
    }
    return 0;
}
