#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    long long int n,s,nth;
    scanf("%d",&tc);
    while(tc--)
    {
        scanf("%lld",&n);
        s=2+(n-2)*4;
        nth=(n-1)*(2+s);
        printf("%lld\n",nth/2);
    }
    return 0;
}

