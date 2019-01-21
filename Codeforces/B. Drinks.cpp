#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n,p,s=0;
    scanf("%lf",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%lf",&p);
        s+=p;
    }
    printf("%.12lf",s/n);
    return 0;
}
