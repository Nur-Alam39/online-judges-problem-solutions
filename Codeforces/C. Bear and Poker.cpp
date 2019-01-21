#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    int temp;
    while(b>0)
    {
        temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],r;
    for(int i=0; i<n; i++)scanf("%d",a+i);
    r= a[0];
    for(int i=1; i<n; i++)
        r=gcd(r, a[i]);
    printf("%d\n",r);
    for(int i=0; i<n; i++)
        if(r*2!=a[i]||r*3!=a[i])
        {
            printf("NO\n");
            return 0;
        }
    printf("YES\n");
    return 0;
}
