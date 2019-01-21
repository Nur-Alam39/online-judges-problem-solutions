#include<bits/stdc++.h>
using namespace std;
int p(long long int x)
{
    return ((x != 0) && ((x & (x - 1)) == 0));
}
int main()
{
    int n,cn=0;
    scanf("%d",&n);
    long int a[n];
    for(int i=0; i<n; i++)
        scanf("%ld",&a[i]);
    for(int i=0; i<n; i++)
        for(int j=i+1; j<n; j++)
        {
            long long int sum=a[i]+a[j];
            if(sum%2==0)
            {
                int c=p(sum);
                if(c==true)
                    cn++;
            }
        }
    printf("%d",cn);
    return 0;
}
