#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long int h,r,a;
    long long int sum=0;
    double vag,fall,vagses  ;
    scanf("%d%ld%ld",&n,&h,&r);
    for(int i=0;i<n;i++)
    {
        scanf("%ld",&a);
        sum+=a;
    }
    vag=double(sum)/h;
    vagses=double(sum)%h;
    vagses--;
    fall=double(h)/r;
    printf("%lf",vag*fall+vagses);
    return 0;
}
