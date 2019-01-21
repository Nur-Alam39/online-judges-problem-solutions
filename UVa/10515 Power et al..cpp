#include<bits/stdc++.h>
using namespace std;
int Bigmod(long long int b, long long int p)
{
    if(p==0) return 1;
    if(p%2==0)return (Bigmod(b,p/2)*Bigmod(b,p/2))%10;
    return (Bigmod(b,p-1)*(b%10))%10;
}
int main()
{
    long long int base,pow;
    while(scanf("%lld%lld",&base,&pow)==2)
    {
        if(base==0&&pow==0)
            break;
        cout<<Bigmod(base,pow)<<endl;
    }
    return 0;
}
