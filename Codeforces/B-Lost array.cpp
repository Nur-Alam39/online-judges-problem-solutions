#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int mx=-1,s=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>mx)mx=a[i];
        s+=a[i];
    }
    int init=mx;
    while(1)
    {
        int p=0;
        for(int i=0;i<n;i++)
            p+=init-a[i];
        if(p>s)return printf("%d",init),0;
        init++;
    }
    return 0;
}

