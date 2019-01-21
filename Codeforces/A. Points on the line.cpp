#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d,a[105];
    scanf("%d%d",&n,&d);if(n==1)return printf("0"),0;
    for(int i=0; i<n; i++)scanf("%d",&a[i]);
    sort(a,a+n);
    for(int i=n-1; i>=0; i--)
        if(a[i]-a[0]==d)return printf("%d",n-i-1),0;
}
