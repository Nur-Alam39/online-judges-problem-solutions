#include<bits/stdc++.h>
using namespace std;
int main()
{
    float mn,mn1,mn2;
    int dis=20*60;
    int hh,mm,h,d,c,n,cn,a1;
    scanf("%d%d%d%d%d%d",&hh,&mm,&h,&d,&c,&n);
    int awk=hh*60+mm;
    if(awk>=dis)
    {
        cn=h/n;
        if(cn*n<h)cn++;
        mn=(float)cn*c;
        mn=mn-(mn*20.0)/100.0;
        printf("%f",mn);
    }
    else
    {
        cn=h/n;
        if(cn*n<h)cn++;
        mn1=(float)cn*c;
        a1=dis-awk;
        h+=d*a1;
        cn=h/n;
        if(cn*n<h)cn++;
        mn2=(float)cn*c;
        mn2=mn2-(mn2*20.0)/100.0;
        float ans;
        if(mn1<=mn2)ans=mn1;
        else ans=mn2;
        printf("%f\n",ans);
    }
    return 0;
}

