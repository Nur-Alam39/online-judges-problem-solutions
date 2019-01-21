#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    int a[n],i;
    for(i=1; i<=n; i++)
    {
        sum+=i;
        a[i]=i;
        if(sum==n)
        {
            printf("%d\n",i);
            for(int j=1; j<=i; j++)
                printf("%d ",a[j]);
            break;
        }
        else if(sum>n)
        {
            a[sum-n]=0;
            printf("%d\n",i-1);
            for(int j=1; j<=i; j++)
                if(a[j]>0)
                    printf("%d ",a[j]);
            break;
        }
    }
    return 0;
}
