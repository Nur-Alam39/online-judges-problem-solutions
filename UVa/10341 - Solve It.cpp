#include<bits/stdc++.h>
using namespace std;
int p,q,r,s,t,u,mid;
float d[10010],ans;
float f_round(float dval, int n)
{
    char l_fmtp[32], l_buf[64];
    char *p_str;
    sprintf (l_fmtp, "%%.%df", n);
    if (dval>=0)
        sprintf (l_buf, l_fmtp, dval);
    else
        sprintf (l_buf, l_fmtp, dval);
    return ((float)strtod(l_buf, &p_str));
}
float f(float x)
{
    float a=p*exp(-x)+q*sin(x)+r*cos(x)+s*tan(x)+t*x*x+u;
    return a;
}
float bS(int l,int h)
{
    while(h>=l)
    {
        mid=(l+h)/2;
        ans=f(d[mid]);
        ans=f_round(ans,4);
        printf("l=%d h=%d ",l,h);
        printf("ans=%f x=%f\n",ans,d[mid]);
        if(ans==0)
            return d[mid];
        else if(ans<0)
            return bS(l,mid-1);
        else
            return bS(mid+1,h);
    }
    return -1;
}
int main()
{
    int j=0;
    for(float i=0.0000; i<=1.0000; i+=0.0001,j++)d[j]=f_round(i,4);
    while(scanf("%d%d%d%d%d%d",&p,&q,&r,&s,&t,&u)==6)
    {
        float ans=bS(0,10000);
        if(ans!=-1)
            printf("%.4f\n",ans);
        else
            printf("No solution\n");
    }
    return 0;
}



