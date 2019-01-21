#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    while(b!=0)
    {
        a%=b;
        swap(a,b);
    }
    return a;
}
int main()
{
    int n,cas=1;
    while(scanf("%d",&n)&&n)
    {
        int g,a,sum=0,r,d;
        float avg;
        for(int i=0; i<n; i++)
            scanf("%d",&a),sum+=a;
        g=gcd(sum,n);
        sum/=g,n/=g;
        avg=(float)sum/n;
        printf("Case %d:\n",cas++);
        if(abs(avg)>1)
        {
            d=sum/n;
            r=sum%n;
            if(avg>0)
            {
                printf("1.\n%d\n-\n%d\n\n",sum,n);
                printf("  %d\n%d-\n%d\n\n",r,d,n);

                if(d>1&&d<10)
                {
                       if(n>1&&n<10)
                       {
                           printf(" %d\n%d-\n %d",r,d,n);
                       }
                       else if(n>10&&n<100)
                       {
                           printf(" %d\n%d-\n %d",r,d,n);
                       }
                }
                else if(d>10&&d<100)
                {

                }
            }
        }
        else if(abs(avg)<1)
        {
            if(avg>0)
                printf("2.\n%d\n-\n%d\n",sum,n);
            else
                printf("2.\n  %d\n- -\n  %d\n",abs(sum),abs(n));
        }

    }
    return 0;
}
