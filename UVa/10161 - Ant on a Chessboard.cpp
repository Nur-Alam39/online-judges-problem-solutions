#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    while(scanf("%lld",&n)&&n)
    {
        long long int root=ceil(sqrt(n)),x,y,l,r;
        l=root*root;
        r=l-root+1;
        if(n==l)
            y=1,x=root;
        else if(n>=r&&n<l)
            x=root,y=l-n+1;
        else
            y=root,x=n-(l-(2*root-1));
        if(root%2)
            swap(x,y);
        printf("%lld %lld\n",x,y);
    }
    return 0;
}
