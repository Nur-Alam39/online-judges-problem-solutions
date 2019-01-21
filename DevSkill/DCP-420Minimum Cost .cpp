#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,n;
    scanf("%d",&tc);
    while(tc--)
    {
        scanf("%d",&n);
        int mn=INT_MAX;
        int a[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]<mn)mn=a[i];
        }
        long long int mov=0;
        for(int i=0;i<n;i++)mov+=a[i]-mn;
        printf("%lld\n",mov);
    }
    return 0;
}

