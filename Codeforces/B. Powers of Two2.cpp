#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a2[35]= {1,2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384,32768,
                           65536,131072,262144,524288,1048576,2097152,4194304,8388608,
                           16777216,33554432,67108864,134217728,268435456,536870912,
                           1073741824,2147483648,4294967296,8589934592
                          };
    int n,cn=0;;
    scanf("%d",&n);
    long int a[n];
    for(int i=0; i<n; i++)
        scanf("%ld",&a[i]);
    for(int i=0; i<n; i++)
        for(int j=i+1; j<n; j++)
        {
            long long int sum=a[i]+a[j];
            if(sum<=8589934592)
                for(int k=0; k<35; k++)
                    if(sum==a2[k])
                    {
                        cn++;
                        break;
                    }
        }
    printf("%d",cn);
    return 0;
}
