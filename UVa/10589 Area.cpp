#include<bits/stdc++.h>
using namespace std;
struct point
{
    double x,y;
};
double dist(point p1,point p2)
{
    double d;
    d=sqrt((p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y));
    return d;
}
int main()
{
    int n,in,m,n2;
    double a,r;
    while(scanf("%d%lf",&n,&a)&&n)
    {
        m=0,n2=n;
        point p,p_sqr[4]= {{0.0,0.0},{0.0,a},{a,0.0},{a,a}};
        while(n--)
        {
            in=0;
            scanf("%lf%lf",&p.x,&p.y);
            for(int i=0; i<4; i++)
            {
                r=dist(p,p_sqr[i]);
                if(r<=a)in++;
            }
            if(in==4)m++;
        }
        printf("%.5lf\n",(m*a*a)/n2);
    }
    return 0;
}
