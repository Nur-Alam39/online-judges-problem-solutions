#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    for(int i=0;i<n-2;i++)
            if(a[i]==1&&a[i+1]==0&&a[i+2]==1)d++,i+=2;
    printf("%d",d);
    return 0;
}

