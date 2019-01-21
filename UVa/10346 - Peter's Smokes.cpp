#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    while(scanf("%d%d",&n,&k)!=EOF)
    {
        int sum=0,d;
        while(n>=k)
        {
            d=n/k;
            sum+=d*k;
            n=d+(n%k);
            //printf("d=%d sum=%d n=%d\n",d,sum,n);
            if(n<k)
            {
                sum+=n;
                break;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}
