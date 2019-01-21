#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,b,d,o,sum=0,o_n=0;
    scanf("%ld%ld%ld",&n,&b,&d);
    for(long int i=0; i<n; i++)
    {
        scanf("%ld",&o);
        if(o<=b)
            sum+=o;
        if(sum>d)
        {
            o_n++;
            sum=0;
        }
    }
    printf("%ld",o_n);
    return 0;
}
