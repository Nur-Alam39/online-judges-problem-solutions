#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    scanf("%d",&tc);
    while(tc--)
    {
        int n;
        unsigned long long int pre=0;
        scanf("%d",&n);
        while(n--)
        {
            long int f,n,p;
            scanf("%ld%ld%ld",&f,&n,&p);
            pre+=f*p;
        }
        printf("%llu\n",pre);
    }
    return 0;
}
