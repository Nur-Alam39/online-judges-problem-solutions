#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int a,b,c,max,sm,mid;
        scanf("%d%d%d",&a,&b,&c);
        if(a>b&&a>c)
            {
                max=a;
                if(b>c)
                {
                    mid=b;
                    sm=c;
                }
                else
                {
                    mid=c;
                    sm=b;
                }
            }
        else if(b>a&&b>c)
            {
                max=b;
                if(a>c)
                {
                    mid=a;
                    sm=c;
                }
                else
                {
                    mid=c;
                    sm=a;
                }
            }
        else
            {
                max=c;
                if(a>b)
                {
                    mid=a;
                    sm=b;
                }
                else
                {
                    mid=b;
                    sm=a;
                }
            }
        if((mid+sm<=max)||(a<=0||b<=0||c<=0))
            printf("Wrong!!\n");
        else
            printf("OK\n");
    }
    return 0;
}
