#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,m=1,n,d,one;
    scanf("%d",&tc);
    while(tc--)
    {
        one=0;
        scanf("%d",&n);
        while(n)
        {
            d=n%2;
            if(d)
                one++;
            n/=2;
        }
        if(one%2==0)
            printf("Case %d: even\n",m++);
        else
            printf("Case %d: odd\n",m++);
    }
    return 0;
}




