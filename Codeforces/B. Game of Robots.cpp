#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,k,c=0;
    scanf("%ld%ld",&n,&k);
    int a[n+1];
    for(int i=1;i<=n;i++)scanf("%d",&a[i]);
    for(int i=1;i<=n;i++)
    {
        if(i+c>=k)
            break;
        c+=i;
    }
    printf("%d",a[k-c]);
    return 0;
}
