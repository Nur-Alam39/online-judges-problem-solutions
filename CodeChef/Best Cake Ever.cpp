#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    scanf("%d",&tc);
    while(tc--)
    {
        int n,k,c,d;
        scanf("%d%d",&n,&k);
        if(n==k)
        {
            for(int i=1;i<=k;i++)printf("%d ",i);
        }
        else if(n>k)
        {
            for(int i=1;i<=k;i++)printf("%d ",i);
            d=n-k;
            for(int i=1;i<=d;i++)printf("%d ",k);
        }
        else if(n<k)
        {
            d=k-n,c=0;
            for(int i=1;;i+=d)
            {
                printf("%d ",i);
                c++;
                if(c==n)break;
            }
        }
        printf("\n");
    }
    return 0;
}

