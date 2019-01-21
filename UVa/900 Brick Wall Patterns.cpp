#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long int ans,i,a,b,c;
    while(scanf("%d",&n)&&n)
    {
        a=0;
        b=1;
        for(i=1;i<=n;i++)
        {
           c=a+b;
           a=b;
           b=c;
        }
        printf("%lld\n",c);
    }
    return 0;
}
