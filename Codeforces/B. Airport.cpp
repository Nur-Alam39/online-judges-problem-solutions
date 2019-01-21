#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,min_cost=0,max_cost=0;
    scanf("%d%d",&n,&p);
    int a[p],b[p],min_p=n,max_p=n;
    for(int i=0; i<p; i++)scanf("%d",a+i),b[i]=a[i];
    sort(a,a+p);
    for(int i=0; i<p&&min_p; i++)
        while(a[i]&&min_p)
        {
            min_cost+=a[i],a[i]--,min_p--;
        }
    while(max_p)
    {
        sort(b,b+p);
        max_cost+=b[p-1],b[p-1]--,max_p--;
    }
    printf("%d %d",max_cost,min_cost);
    return 0;
}
