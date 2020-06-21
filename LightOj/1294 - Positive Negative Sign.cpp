#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,c=1,f;
    long long int n,m,sum,i,j;
    scanf("%d",&tc);
    while(tc--)
    {
        scanf("%lld%lld",&n,&m);
        sum=0,i=1;
        long long int a[n+1];
        a[1]=1;
        for(i=2; i<=n; i++)
            a[i]=i,a[i]+=a[i-1];
        for(i=1; i<=n; i++)
            printf("%lld ",a[i]);
        cout<<endl;
        f=1;
        //m--;
        for(i=m; i<=n; i+=m)
        {
            if(f==1)
                sum-=a[i]-a[i-m-1],f=0;
            else
                sum+=a[i]-a[i-m-1],f=1;
            cout<<a[i]<<" "<<sum<<endl;
        }
        printf("Case %d: %lld\n",c++,sum);
    }
    return 0;
}




