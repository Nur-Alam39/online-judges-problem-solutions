#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("out.txt","w",stdout);
    long long int n;
    int c=1;
    while(scanf("%lld",&n)&&n)
    {
        n=ceil((3+sqrt(9+4*2*n))/2);
        printf("Case %d: %lld\n",c++,n);
    }
    return 0;
}
