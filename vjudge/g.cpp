#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,c=1;
    scanf("%d",&tc);
    long long int r,n,m;
    while(tc--)
    {
        scanf("%lld%lld",&n,&m);
        r=(n*m)/2;
        printf("Case %d: %lld\n",c++,r);
    }
    return 0;
}



