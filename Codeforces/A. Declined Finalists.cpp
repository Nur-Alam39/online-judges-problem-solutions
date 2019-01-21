#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    sort(a,a+n);
    if(a[n-1]>25)
    printf("%d",a[n-1]-25);
    else printf("0");
    return 0;
}
