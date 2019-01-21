#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,c=1;
    freopen("input.txt","r",stdin);
    freopen("out.txt","w",stdout);
    while(scanf("%lld",&n)&&n)
    {
        vector<long long int>a;
        long long int d;
        for(long long int i=1;; i++)
        {
            d=n/i;
            if(n%i==0)
                a.push_back(i+d);
            if(i>d)
                break;
        }
        sort(a.begin(),a.end());
        printf("Case %lld: %lld\n",c++,a[0]);
    }
    return 0;
}
