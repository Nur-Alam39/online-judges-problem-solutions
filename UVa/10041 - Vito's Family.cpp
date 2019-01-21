#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    scanf("%d",&tc);
    while(tc--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++)scanf("%d",&a[i]);
        sort(a,a+n);
        int mid=a[(n-1)/2],sum=0;
        for(int i=0;i<(n-1)/2;i++)sum+=mid-a[i];
        for(int i=(n-1)/2;i<n;i++)sum+=a[i]-mid;
        printf("%d\n",sum);
    }
    return 0;
}
