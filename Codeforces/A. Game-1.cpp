#include<bits/stdc++.h>
using namespace std;
int a[1005],n;
int main()
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    sort(a,a+n);
    if(n%2)printf("%d",a[n/2]);
    else printf("%d",a[n/2-1]);
    return 0;
}
