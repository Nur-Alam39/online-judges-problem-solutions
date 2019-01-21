#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,s;
    int h=1,ca=1,co=1;
    scanf("%ld",&n);
    s=n-(1234567+123456+1234);
    printf("1's=%d\n",s);
    if(s==0)
        printf("YES");
    else if(s<0)
        printf("NO");
    else if(s>0)
    {
        for(;;)
        {
            if(h==0&&ca==0&&co==0)
                break;
            else
            {
                if(h)
                    h=s/1234567;
                if(ca)
                    ca=s/123456;
                if(co)
                    co=s/1234;
                if(h&&ca&&co)
                    s-=1359257;
                else if(h&&ca)
                    s-=1358023;
                else if(h&&co)
                    s-=1235801;
                else if(ca&&co)
                    s-=124690;
                else if(h)
                    s-=1234567;
                else if(ca)
                    s-=123456;
                else if(co)
                    s-=1234;

                    printf("h=%d ca=%d co=%d s=%d\n",h,ca,co,s);
            }
        }
        if(s)
            printf("YES");
        else
            printf("NO");
    }
    return 0;
}


