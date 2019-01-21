#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,a,b,p,q,m,i,c,d ;
    long long int sum=0;
    scanf("%ld%ld%ld%ld%ld",&n,&a,&b,&p,&q);
    m=q;
    if(p>q)
        m=p;
    c=n/a;
    d=n/b;
        if(i%a==0&&i%b==0)
            sum+=m;
        else if(i%a==0)
            sum+=p;
        else if(i%b==0)
            sum+=q;
    printf("%lld",sum);
    return 0;
}
