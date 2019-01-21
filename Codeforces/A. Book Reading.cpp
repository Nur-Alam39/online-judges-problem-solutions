#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,d=0,sum=0,r;
    scanf("%d%d",&n,&t);
    int a[n];
    for(int i=0; i<n; i++)scanf("%d",&a[i]);
    for(int i=0; i<n; i++)
    {
        r=86400-a[i],sum+=r,d++;
        if(sum>=t)return printf("%d",d),0;
    }
}


