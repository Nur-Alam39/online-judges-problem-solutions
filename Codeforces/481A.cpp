#include<bits/stdc++.h>
#define lli long long int
//scanf("%I64d",&n);
using namespace std;
int main()
{
    int n,k=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    for(int i=n;i>=0;i--)
        for(int j=i-1;j>=0;j--)
            if(a[i]==a[j])a[j]=-1;
    for(int i=0;i<n;i++)if(a[i]!=-1)k++;
    printf("%d\n",k);
    for(int i=0;i<n;i++)if(a[i]!=-1)printf("%d ",a[i]);
    printf("");
    return 0;
}

