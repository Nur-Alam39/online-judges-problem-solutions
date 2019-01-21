#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    long int r=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);
    sort(a,a+n);
    m=a[n-1];
    for(int i=0; i<n; i++)
        r+=m-a[i];
    printf("%ld",r);
    return 0;
}
