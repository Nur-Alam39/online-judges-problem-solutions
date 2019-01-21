#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",a+i);
    for(int i=0,j=n-1;i<=j;i+=2,j-=2)
        swap(a[i],a[j]);
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}
