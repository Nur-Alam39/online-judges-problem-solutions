#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long int x,a,c_d;
    long long int sum;
    scanf("%d%ld",&n,&x);
    c_d=0;
    sum=x;
    for(int i=0; i<n; i++)
    {
        char c,d;
        scanf("%c%c%ld",&d,&c,&a);
        if(c=='+')
            sum+=a;
        else if(c=='-')
        {
            sum-=a;
            if(sum<0)
            {
                c_d++;
                sum+=a;
            }
        }
    }
    printf("%lld %ld",sum,c_d);
    return 0;
}
