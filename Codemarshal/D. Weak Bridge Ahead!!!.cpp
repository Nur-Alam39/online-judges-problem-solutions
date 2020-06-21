#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,c=1;
    scanf("%d",&tc);
    while(tc--)
    {
        int n,m;
        scanf("%d%d",&n,&m);
        long int i,i1,j,a[n+1],b[m+1],l;
        long long int sum=0;
        for(i=0; i<n; i++)
            {
                scanf("%ld",&a[i]);
                sum+=a[i];
            }
        for(i=0; i<m; i++)
            {
                scanf("%ld",&b[i]);
                sum+=b[i];
            }
        if(a[n-1]>b[m-1])
            sum-=a[n-1];
        else
            sum-=b[m-1];
        printf("Case %d: %lld\n",c++,sum);
    }
    return 0;
}

