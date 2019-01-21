#include<bits/stdc++.h>
/*
    printf("");
    scanf("%d",&);
*/
using namespace std;
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    double p=100000.00,a,b,x;
    for(int i=0;i<n;i++)
    {
       scanf("%lf%lf",&a,&b);
       x=a/b;
       p=min(x,p);
    }
    printf("%.8lf",p*m);
    return 0;
}
