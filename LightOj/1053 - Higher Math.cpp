#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,m=1;
    double x,y,z,a,b,c;
    scanf("%d",&tc);
    while(tc--)
    {
        scanf("%lf%lf%lf",&x,&y,&z);
        a=acos((x*x+z*z-y*y)/(2*x*z));
        a*=180.0/M_PI;
        b=acos((x*x+y*y-z*z)/(2*x*y));
        b*=180.0/M_PI;
        c=acos((z*z+y*y-x*x)/(2*z*y));
        c*=180.0/M_PI;
        if(a==90.0||b==90.0||c==90.0)
            printf("Case %d: yes\n",m++);
        else
            printf("Case %d: no\n",m++);
    }
    return 0;
}
