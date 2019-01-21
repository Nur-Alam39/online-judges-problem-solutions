#include<bits/stdc++.h>
using namespace std;
long long int factorial(long long int x)
{
    long long int i,m=1;
    for(i=1; i<=x; i++)
        m=m*i;
    return m;
}
int main()
{
    long long int n,m,x,vn,vr,vr1,ncr;
    scanf("%lld%lld",&n,&m);
    set<long long int>a;
    for(int i=0; i<n; i++)
    {
        scanf("%lld",&x);
        a.insert(x);
    }
    long long int c=a.size();
    c=m-a.size();
    vn=factorial(n);
    vr=factorial(2);
    vr1=factorial(n-2);
    ncr=vn/(vr1*vr);
    printf("%lld",ncr-c);
    return 0;
}
