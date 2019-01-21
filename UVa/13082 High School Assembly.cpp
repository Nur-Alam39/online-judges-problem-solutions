#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,c=1;
    scanf("%d",&tc);
    while(tc--)
    {
        long long int n;
        scanf("%lld",&n);
        long long int a[n],i,counter=0,temp,j;
        for(i=0; i<n; i++)
            scanf("%lld",&a[i]);
            for(i=0; i<n; i++)
            printf("%lld ",a[i]);
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                if(a[i]<a[j])
                {
                    counter++;
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }
        for(i=0; i<n; i++)
            printf("%lld ",a[i]);
        printf("Case %d: %lld\n",c++,counter);
    }
    return 0;
}
