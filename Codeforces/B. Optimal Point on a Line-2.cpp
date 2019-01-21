#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n;
    scanf("%ld",&n);
    long long int a[n];
    for(long int i=0; i<n; i++)
        scanf("%lld",&a[i]);
    sort(a,a+n);
    long int mid;
    mid=(n-1)/2;
    printf("%ld",a[mid]);
}

