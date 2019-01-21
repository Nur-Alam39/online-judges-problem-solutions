#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],c=0,d=INT_MAX;
    for(int i=0; i<n; i++)
        scanf("%d",a+i);
    sort(a,a+n);
    for(int i=0; i<n-1; i++)
        if((a[i+1]-a[i])<d)
            d=(a[i+1]-a[i]);
    for(int i=0; i<n-1; i++)
        if((a[i+1]-a[i])==d)
            c++;
    printf("%d %d",d,c);
    return 0;
}
