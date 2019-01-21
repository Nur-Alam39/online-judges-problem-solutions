#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
    lli a,b,f=1,z=2,mx,mn;
    scanf("%I64d%I64d",&a,&b);
    if(a>b)
    {
        mx=a;
        mn=b;
        f=1;
    }
    else
    {
        mx=b;
        mn=a;
        z=2;
    }
    lli d;
    while(1)
    {
        if(mx==0||mn==0)
            break;
        if(mx<mn)
        {
            swap(mx,mn);
            swap(f,z);
        }
        d=mx/mn;
        if(d>=2)
            mx=mx-(mn*d);
        else if(d<=1)
            break;
        printf("%I64d %I64d\n",mx,mn);
    }
    printf("f=%I64d z=%I64d\n",f,z);
    if(f==1&&z==2)
        printf("ans=%I64d %I64d",mx,mn);
    else if(f==2&&z==1)
        printf("ans=%I64d %I64d",mn,mx );
    return 0;
}

