#include<bits/stdc++.h>
using namespace std;
struct point
{
    double x,y;
};
int main()
{
    //freopen("out.txt","w",stdout);
    int n;
    while(scanf("%d",&n)==1&&n)
    {
        point p[n];
        double pd,d;
        int flag=1;
        vector<double>dis;
        for(int i=0; i<n; i++)scanf("%lf%lf",&p[i].x,&p[i].y);
        scanf("%lf",&d);
        for(int i=0; i<n; i++)
            for(int j=i+1; j<n; j++)
            {
                pd=sqrt((p[i].x-p[j].x)*(p[i].x-p[j].x)+(p[i].y-p[j].y)*(p[i].y-p[j].y));
                //printf("%lf\n",pd/2.0);
                if(pd/2.0>d)
                {
                    flag=0;
                    i=n;
                    break;
                }
            }
            if(flag)printf("The polygon can be packed in the circle.\n");
            else printf("There is no way of packing that polygon.\n");
    }
    return 0;
}
