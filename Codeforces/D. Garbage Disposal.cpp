#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    int a[n],bag=0,rem=0;
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);
    for(int i=0; i<n; i++)
    {
        if(rem)bag++;
        bag+=a[i]/k;
        rem=a[i]%k;
    }
    if(rem)bag++;
    return printf("%d",bag),0;
}


