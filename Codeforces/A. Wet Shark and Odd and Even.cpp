#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    long int a[n];
    long long int sum=0;
    for(int i=0; i<n; i++)
        scanf("%ld",&a[i]),sum+=a[i];
    if(sum%2==0)
        printf("%I64d",sum);
    else
    {
        sort(a,a+n);
        for(int i=0; i<n; i++)
        {
            if(a[i]%2!=0)
            {
                sum-=a[i];
                if(sum%2==0)
                {
                    printf("%I64d",sum);
                    break;
                }
            }
        }
    }
    return 0;
}
