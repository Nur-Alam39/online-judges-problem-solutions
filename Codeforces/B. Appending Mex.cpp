#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)scanf("%d",&a[i]);
    if(a[0]!=0)return printf("1"),0;
    int mx=0;
    for(int i=1; i<n; i++)
    {
        if(a[i]<=mx);
        else if(a[i]-mx==1)mx=mx+1;
        else return printf("%d",i+1),0;
    }
    return printf("-1"),0;
}

