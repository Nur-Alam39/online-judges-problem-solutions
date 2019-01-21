#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s=0,d=0,q;
    scanf("%d",&n);
    int a[n+1];
    for(int i=1;i<=n;i++)scanf("%d",&a[i]),s+=a[i];
    q=s/2;
    if(s%2)q++;
    for(int i=1;i<=n;i++){
            d+=a[i];
            if(d>=q)return printf("%d",i),0;
    }
}

