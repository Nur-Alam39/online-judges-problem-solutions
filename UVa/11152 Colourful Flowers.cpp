#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,out_c_r,out_c_a,s,t_a,i_c_a,i_c_r;
    while(scanf("%lf%lf%lf",&a,&b,&c)==3)
    {
        s=(a+b+c)/2;
        t_a=sqrt(s*(s-a)*(s-b)*(s-c));
        out_c_r=((a*b*c)/sqrt((a+b+c)*(b+c-a)*(c+a-b)*(a+b-c)));
        out_c_a=3.14159265359*pow(out_c_r,2)-t_a;
        i_c_r=t_a/s;
        i_c_a=3.14159265359*pow(i_c_r,2);
        printf("%.4lf %.4lf %.4lf\n",out_c_a,t_a-i_c_a,i_c_a);
    }
    return 0;
}
