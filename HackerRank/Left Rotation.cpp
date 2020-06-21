#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d;
    scanf("%d%d",&n,&d);
    int a[n],r=d%n;
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    for(int i=r;i<n;i++)printf("%d ",a[i]);
    for(int i=0;i<r;i++)printf("%d ",a[i]);
    return 0;
}

