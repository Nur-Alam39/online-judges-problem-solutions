#include<bits/stdc++.h>
#define ll unsigned long long int
using namespace std;
int main()
{
    double ax,ay,bx,by,cx,cy;
    scanf("%lf%lf%lf%lf%lf%lf",&ax,&ay,&bx,&by,&cx,&cy);
    double a=sqrt((ax-bx)*(ax-bx)+(ay-by)*(ay-by));
    double b=sqrt((cx-bx)*(cx-bx)+(cy-by)*(cy-by));
    double area=(ax*(by-cy)+bx*(cy-ay)+cx*(ay-by))/2;
    //printf("%llf %llf %llf",a,b,area);
    if(a==b&&abs(area)>0)printf("Yes");
    else printf("No");
    return 0;
}
