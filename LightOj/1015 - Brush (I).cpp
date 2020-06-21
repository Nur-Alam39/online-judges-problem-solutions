#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,m=1;
    scanf("%d",&tc);
    while(tc--)
    {
        int n,td=0,d;
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            scanf("%d",&d);
            //if(d>0)
                td+=d;
        }
        printf("Case %d: %d\n",m++,td);
    }
    return 0;
}

