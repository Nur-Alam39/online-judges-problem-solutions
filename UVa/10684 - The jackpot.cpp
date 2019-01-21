#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n)==1&&n)
    {
        int a[n],c=0;
        for(int i=0; i<n; i++)
        {
            scanf("%d",a+i);
            if(a[i]<=0)
                c++;
        }
        if(c==n)
            printf("Losing streak.\n");
        else
        {
            int sum=0,maxsum=0;
            for(int i=0; i<n; i++)
            {
                sum+=a[i];
                if(sum>maxsum)
                    maxsum=sum;
                if(sum<0)
                    sum=0;
            }
            if(sum>0)
                printf("The maximum winning streak is %d.\n",maxsum);
            else printf("Losing streak.\n");
        }
    }
    return 0;
}

