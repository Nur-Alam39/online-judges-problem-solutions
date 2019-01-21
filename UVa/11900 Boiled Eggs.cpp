#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,c=1;
    scanf("%d",&tc);
    while(tc--)
    {
        int n,p,q,j=0;
        scanf("%d%d%d",&n,&p,&q);
        int a[n+1],sum=0,i;
        for(i=1; i<=n; i++)
            scanf("%d",&a[i]);
        for(i=1; i<=p&&i<=n; i++)
        {
            sum+=a[i];
            if(sum>q)
                break;
            j++;
        }
        printf("Case %d: %d\n",c++,j);
    }
    return 0;
}
