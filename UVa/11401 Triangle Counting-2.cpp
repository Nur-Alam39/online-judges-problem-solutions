#include<bits/stdc++.h>
#define sz 1000007
using namespace std;
long long new_tri[sz],sum_of_triangle[sz];
int main()
{
    new_tri[3]=0;
    int c=0;
    for(int i=4; i<=sz; i++)
    {
        if(i%2==0)c++;
        new_tri[i]=new_tri[i-1]+c;
        sum_of_triangle[i]=sum_of_triangle[i-1]+new_tri[i];
    }
    int n;
    while(scanf("%d",&n)&&n>=3)
    {
        printf("%lld\n",sum_of_triangle[n]);
    }
    return 0;
}
