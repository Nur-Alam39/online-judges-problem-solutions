#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("out.txt","w",stdout);
    double pi=2*acos(0.0),n,r;
    while(scanf("%lf%lf",&r,&n)!=EOF)
    {
        double area;
        area=(n*r*r*sin((2.0*pi)/n))/2.0;
        printf("%.3lf\n",area);
    }
    return 0;
}
