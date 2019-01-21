#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
    lli l1,r1,l2,r2,k,s;
    scanf("%I64d%I64d%I64d%I64d%I64d",&l1,&r1,&l2,&r2,&k);
    s=abs(r1-l2)+1;
    if(k>=r1&&k<=l2)
        s--;
    else if(k>=l2&&k<=r1)
        s--;
    printf("%I64d",s);
    return 0;
}
