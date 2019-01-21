#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
    int n;
    lli t;
    double ans;
    scanf("%d%I64d",&n,&t);
    ans=double(n)*pow(1.000000011,t);
    printf("%.30lf",ans);
    return 0;
}
