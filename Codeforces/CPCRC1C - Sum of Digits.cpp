#include<bits/stdc++.h>
using namespace std;
int digit_sum(long long int n)
{
    int sum=0;
    while(n!=0)
    {
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int main()
{
    long long int a,b,i,sum;
    while(scanf("%lld%lld",&a,&b))
    {
        sum=0;
        if(a==-1&&b==-1)
            break;
        for(i=a;i<=b;i++)
            sum+=digit_sum(i);
        printf("%lld\n",sum);
    }
    return 0;
}
