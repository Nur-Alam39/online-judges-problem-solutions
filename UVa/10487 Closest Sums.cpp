#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=1;
    while(scanf("%d",&n)&&n)
    {
        int a[n];
        vector<int>sum;
        for(int i=0; i<n; i++)scanf("%d",&a[i]);
        for(int i=0; i<n; i++)
            for(int j=i+1; j<n; j++)sum.push_back(a[i]+a[j]);
        printf("Case %d:\n",c++);
        int q;
        scanf("%d",&q);
        for(int i=0; i<q; i++)
        {
            int x,ans;
            scanf("%d",&x);
            int m=10000000000;
            for(int j=0; j<sum.size(); j++)
                if((abs(sum[j]-x))<m)
                    ans=sum[j],m=abs(sum[j]-x);
            printf("Closest sum to %d is %d.\n",x,ans);
        }
    }
    return 0;
}

