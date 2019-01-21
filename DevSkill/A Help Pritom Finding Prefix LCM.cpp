#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if (b==0)
        return a;
    return gcd(b, a%b);
}
long long int findlcm(int x[], int n)
{
    long long int ans = x[0];
    for (int i=1; i<n; i++)
        ans=(((x[i]*ans))/(gcd(x[i], ans)) );
    return ans;
}
int main()
{
    int n,k=0;
    scanf("%d",&n);
    int a[n];
    long long int lcm[n];
    for(int i=0; i<n; i++)scanf("%d",&a[i]);
    for(int i=1; i<=n; i++)
        lcm[k++]=findlcm(a,i);
    int q,in;
    scanf("%d",&q);
    for(int i=0; i<q; i++)
    {
        scanf("%d",&in);
        printf("%lld\n",lcm[in-1]);
    }
    return 0;
}
