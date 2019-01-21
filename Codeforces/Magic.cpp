#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n;
    scanf("%ld",&n);
    long long int s,i,j=1,k=1,m;
    s=n*n;
    long long int odd[s/2+1],even[s/2+1];
    for(i=1; i<=s; i++)
    {
        if(i%2==0)
            even[j++]=i;
        else
            odd[k++]=i;
    }
    k=m=1;
    for(i=1; i<=n/2+1; i++)
    {
        for(j=n/2-i+1; j>0; j--)
        {
            printf("%lld ",even[k++]);
        }
        for(j=1; j<n/2-i+1; j++)
        {
            printf("%lld ",odd[m++]);
        }
        for(j=n/2-i+1; j>0; j--)
        {
            printf("%lld ",even[k++]);
        }
        cout<<endl;
    }
    return 0;
}
