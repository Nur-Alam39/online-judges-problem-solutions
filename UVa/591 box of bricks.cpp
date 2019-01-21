#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,c=1;
    while(scanf("%d",&t)&&t)
    {
        int a[t],sum=0,d=0;
        for(int i=0; i<t; i++)
        {
            scanf("%d",&a[i]);
            sum+=a[i];
        }
        sum=sum/t;
        for(int i=0; i<t; i++)
            if(a[i]>sum)
                d+=a[i]-sum;
        printf("Set #%d\nThe minimum number of moves is %d.\n\n",c++,d);
    }
    return 0;
}
