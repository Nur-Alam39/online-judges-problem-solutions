#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,s,t_a,i_c_r;
    while(scanf("%lf%lf%lf",&a,&b,&c)==3)
    {
        if(a==0||b==0||c==0)
            printf("The radius of the round table is: 0.000\n");
        else
        {
            s=(a+b+c)/2;
            t_a=sqrt(s*(s-a)*(s-b)*(s-c));
            i_c_r=t_a/s;
            printf("The radius of the round table is: %.3lf\n",i_c_r);
        }
    }
    return 0;
}

