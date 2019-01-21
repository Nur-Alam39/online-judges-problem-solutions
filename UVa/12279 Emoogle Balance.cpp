#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=1;
    while(scanf("%d",&n)&&n)
    {
        int i,sum=0,s;
        for(s=0;s<n;s++)
        {
            scanf("%d",&i);
            if(i>=1&&i<=99)
            sum++;
            else if(i==0)
                sum--;
        }
        printf("Case %d: %d\n",c++,sum);
    }
    return 0;
}
