#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    long int a[n];
    ll sum=0;
    for(int i=0; i<n; i++)
        scanf("%ld",&a[i]);
    sort(a,a+n);
    reverse(a,a+n);
    for(int i=n-1; i>=0; i--)
        if(a[i]>0)
            for(int j=n-1; j>=0; j--)
                if(i!=j)
                    if(a[i]==a[j])
                        a[i]--;
    for(int i=0; i<n; i++)
        cout<<a[i]<< " ",sum+=a[i];
    printf("%lld",sum);
    return 0;
}

