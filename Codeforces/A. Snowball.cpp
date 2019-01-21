#include<bits/stdc++.h>
using namespace std;
int main()
{
    int w,h,u1,d1,u2,d2,final_weight=0;
    scanf("%d%d%d%d%d%d",&w,&h,&u1,&d1,&u2,&d2);
    if(d1<d2)swap(u1,u2),swap(d1,d2);
    final_weight=w;
    for(int i=h;i>=0;i--)
    {
        final_weight+=i;
        if(i==d1)
        {
            final_weight-=u1;
            d1=d2,u1=u2;
        }
        if(final_weight<0)final_weight=0;
    }
    printf("%d",final_weight);
    return 0;
}

