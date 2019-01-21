#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    double x,y,n;
    cin>>x>>y>>n;
    double m,t,v,d,x1,y1;
    m=10000.00000000000000000000;
    for(int i=0; i<n; i++)
    {
        cin>>x1>>y1>>v;
        d=sqrt((x-x1)*(x-x1)+(y-y1)*(y-y1));
        t=d/v;
        if(t<m)
            m=t;
    }
    printf("%.20lf",m);
    return 0;
}
