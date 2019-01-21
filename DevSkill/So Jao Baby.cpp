#include<bits/stdc++.h>
using namespace std;
int tc,cs=1,a[101],k,sum;
int main()
{
    scanf("%d",&tc);
    while(tc--)
    {
        scanf("%d",&k);
        int b[101];
        for(int i=1;i<=100;i++)
        {
            printf("%d.",i);
            scanf("%d",&a[i]);
            printf("\n");
        }
        b[1]=a[1],sum=0;
        for(int i=2;i<=100;i++)b[i]=b[i-1]+a[i];
        //sort(a+1,a+101),sum=0,reverse(a+1,a+101);
        for(int i=50;i>=0;i--)
        {
            sum+=a[i];
            printf("%d ",sum);
            if(sum>=k)
            {
                printf("%d\n",i);
                break;
            }
        }
    }
    return 0;
}

