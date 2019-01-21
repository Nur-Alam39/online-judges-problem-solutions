#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,c,w=1;
    scanf("%ld%ld",&n,&c);
    if(n==1)
        printf("1");
    else
    {
        long int a[n];
        for(long int i=0; i<n; i++)
            scanf("%ld",&a[i]);
        for(long int i=1; i<n; i++)
        {
            if(a[i]-a[i-1]<=c)
                w++;
            else if(a[i]-a[i-1]>c)
                w=1;
        }
        printf("%ld",w);
    }
    return 0;
}
