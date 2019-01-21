#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a[10050],n;
    long int i=0;
    while(scanf("%lld",&n)==1)
    { long int pos,j;
    long long int sum;
        a[i++]=n;
        sort(a,a+i);
        pos=i/2;
        if(i%2==0)
            {
                sum=a[pos-1]+a[pos];
                printf("%ld\n",sum/2);
            }
        else
            printf("%lld\n",a[pos]);
    }
    return 0;
}
