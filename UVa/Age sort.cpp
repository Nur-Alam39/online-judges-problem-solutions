#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
int main()
{
    long long int a,i;
    while(scanf("%lld",&a)&&a)
    {
        long long int n[a];
        for(i=0;i<a;i++)
        scanf("%lld",&n[i]);
        sort(n,n+a);
        for(i=0;i<a-1;i++)
            printf("%d ",n[i]);
        printf("%d\n",n[a-1]);
    }
    return 0;
}
