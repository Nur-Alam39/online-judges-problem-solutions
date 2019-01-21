#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        long long int s,d,m,n1,a,b;
        double a1,b1;
        scanf("%lld%lld",&s,&d);
        if(s<d)
            printf("impossible\n");
        else
        {
            a=(s+d)/2;
            b=(s-d)/2;
            a1=(double)(s+d)/2;
            b1=(double)(s-d)/2;
            if(a==a1&&b==b1)
            {
                if(a>b)
                {
                    m=a;
                    n1=b;
                }
                else
                {
                    m=b;
                    n1=a;
                }
                printf("%lld %lld\n",m,n1);
            }
            else
                printf("impossible\n");
        }
    }
    return 0;
}
