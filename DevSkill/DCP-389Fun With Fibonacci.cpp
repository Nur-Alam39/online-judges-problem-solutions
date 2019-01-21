#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,cs=1;
    scanf("%d",&tc);
    while(tc--)
    {
        long long int n,m,i;
        int o=0,e=0;
        scanf("%lld%lld",&n,&m);
        for(i=n; i<=m; i++)
        {
            if((i+2)%3==0)e++;
            else o++;
        }
        printf("Case %d:\nOdd = %d\nEven = %d\n",cs++,o,e);
    }
    return 0;
}



