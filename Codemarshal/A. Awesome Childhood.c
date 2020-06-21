#include<stdio.h>
int main()
{
    int tc,c=1;
    long long int g,ans;
    scanf("%d",&tc);
    while(tc--)
    {
       scanf("%lld",&g);
       ans=g/2;
       printf("Case %d: %lld\n",c++,ans);
    }
    return 0;
}

