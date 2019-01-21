#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)scanf("%d",a+i);sort(a,a+n);
    int gcd=get_gcd(a[0],0);
    for(int i=1;i<n;i++)
    {
        if(get_gcd(a[i],gcd))
    }
    return 0;
}
