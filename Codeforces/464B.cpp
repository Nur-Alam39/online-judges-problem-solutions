#include<bits/stdc++.h>
#define ulli unsigned long long int
using namespace std;
int main()
{
    ulli ty,rem=10e18+2,d,r,n,k,s,id;
    scanf("%llu%llu",&n,&k);
    ulli a[k],ans[k];
    for(int i=0; i<k; i++)scanf("%llu",&a[i]);
    for(int i=0; i<k; i++)
    {
        d=n/a[i];
        r=n-d*a[i];
        if(r<rem)rem=r,id=i+1,ty=d;
    }
    printf("%llu %llu",id,ty);
    return 0;
}

